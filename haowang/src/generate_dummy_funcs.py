#!/usr/bin/env python3

import argparse
import os
import random


NUM_GROUPS = 1
FUNC_TYPE = {
    "hot": (16, 0),
    "cold": (32, 0),
    "mix": (14, 2),
}
OP_GROUP_SIZE = 36
ENTRY_THRESHOLD = int(0.1 * 100)
MIX_THRESHOLD = int(10 * 100)

def get_func_def(prefix, i, j):
    func_name = f"void {prefix}{i}_{j}"
    arg_list = [f"uint32_t& {x}" for x in ["a", "b", "c", "d"]]
    return "{}({})".format(func_name, ", ".join(arg_list))


def write_hh(args):
    total_size = 0
    hot_size = 0
    lines = []
    for prefix, comb in FUNC_TYPE.items():
        for i in range(1, NUM_GROUPS + 1):
            num = args.num * (args.ratio if prefix == "cold" else 1)
            for j in range(1, num + 1):
                lines.append(f"{get_func_def(prefix, i, j)};\n")
                total_size += sum(comb) * OP_GROUP_SIZE
                hot_size += (sum(comb) * OP_GROUP_SIZE) if prefix != "cold" else 0
    random.shuffle(lines)
    print(f"total size = {total_size/1024:.0f}KB, hot size = {hot_size/1024:.0f}KB")
    with open("dummy_funcs.h", "wt") as fout:
        with open("dummy_funcs.template.h", "rt") as fin:
            fout.writelines(fin.readlines())
        fout.writelines(lines)
        fout.write("\n#endif")


def write_cc(args):
    sections = []
    for prefix, comb in FUNC_TYPE.items():
        for i in range(1, NUM_GROUPS + 1):
            num = args.num * (args.ratio if prefix == "cold" else 1)
            for j in range(1, num + 1):
                lines = []
                lines.append(f"\n{get_func_def(prefix, i, j)} {{\n")
                lines.append(f"  uint32_t x = rand_int();\n")
                lines.append(f"  if (x < {ENTRY_THRESHOLD}) {{\n")
                lines.append(f"    OP{i}(a, b, c, d, {j});\n")
                lines.append(f"    OP{i}(a, b, c, d, {j});\n")
                lines.append("  }\n")
                for _ in range(comb[0]):
                    lines.append(f"  OP{i}(a, b, c, d, {j});\n")
                if comb[1] > 0:
                    lines.append(f"  x = rand_int();\n")
                    lines.append(f"  if (x < {MIX_THRESHOLD}) {{\n")
                    for _ in range(comb[1]):
                        lines.append(f"    OP{i}(a, b, c, d, {j});\n")
                    lines.append("  }\n")
                lines.append("}\n")
                sections.append(lines)
    random.shuffle(sections)
    with open("dummy_funcs.cc", "wt") as fout:
        with open("dummy_funcs.template.cc", "rt") as fin:
            fout.writelines(fin.readlines())
        for lines in sections:
            fout.writelines(lines)


def write_main(args):
    lines = []
    # num of iter loops
    for k in range(1, args.num + 1):
        lines.append(f"{' '*4}for (uint32_t j = 0; j < iter_count; ++j) {{\n")
        for prefix in FUNC_TYPE.keys():
            for i in range(1, NUM_GROUPS + 1):
                if prefix == "cold":
                    lines.append(f"{' '*6}if (i % 1000 == 0 && j == 0) {{\n")
                    for j in range(1, args.ratio + 1):
                        idx = (k - 1) * args.ratio + j
                        lines.append(f"{' '*8}{prefix}{i}_{idx}(a, b, c, d);\n")
                    lines.append(f"{' '*6}}}\n")
                else:
                    lines.append(f"{' '*6}{prefix}{i}_{k}(a, b, c, d);\n")
        lines.append(f"{' '*4}}}\n")
    with open("simple_example.cc", "wt") as fout:
        with open("simple_example.template.cc", "rt") as fin:
            fout.writelines(fin.readlines())
        fout.writelines(lines)
        fout.write(f"{' '*2}}}\n")
        fout.write(f"{' '*2}return (int)(a + b + c + d);\n")
        fout.write(f"}}\n")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument("--num", "-n", required=True, type=int, default=2,
        help="number of groups of hot/mix functions")
    parser.add_argument("--ratio", "-r", required=True, type=int, default=2,
        help="ratio of cold function to hot/mix functions")

    args = parser.parse_args()

    write_hh(args)
    write_cc(args)
    write_main(args)
