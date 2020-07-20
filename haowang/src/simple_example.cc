#include <cstdint>
#include <cstdlib>
#include "dummy_funcs.h"
#include "utils.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return -1;
  }
  const uint32_t loop_count = std::atoi(argv[1]);
  const uint32_t iter_count = std::atoi(argv[2]);
  uint32_t a{0}, b{0}, c{0}, d{0};
  for (uint32_t i = 0; i < loop_count; ++i) {
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_1(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_1(a, b, c, d);
        cold1_2(a, b, c, d);
        cold1_3(a, b, c, d);
        cold1_4(a, b, c, d);
      }
      mix1_1(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_2(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_5(a, b, c, d);
        cold1_6(a, b, c, d);
        cold1_7(a, b, c, d);
        cold1_8(a, b, c, d);
      }
      mix1_2(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_3(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_9(a, b, c, d);
        cold1_10(a, b, c, d);
        cold1_11(a, b, c, d);
        cold1_12(a, b, c, d);
      }
      mix1_3(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_4(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_13(a, b, c, d);
        cold1_14(a, b, c, d);
        cold1_15(a, b, c, d);
        cold1_16(a, b, c, d);
      }
      mix1_4(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_5(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_17(a, b, c, d);
        cold1_18(a, b, c, d);
        cold1_19(a, b, c, d);
        cold1_20(a, b, c, d);
      }
      mix1_5(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_6(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_21(a, b, c, d);
        cold1_22(a, b, c, d);
        cold1_23(a, b, c, d);
        cold1_24(a, b, c, d);
      }
      mix1_6(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_7(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_25(a, b, c, d);
        cold1_26(a, b, c, d);
        cold1_27(a, b, c, d);
        cold1_28(a, b, c, d);
      }
      mix1_7(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_8(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_29(a, b, c, d);
        cold1_30(a, b, c, d);
        cold1_31(a, b, c, d);
        cold1_32(a, b, c, d);
      }
      mix1_8(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_9(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_33(a, b, c, d);
        cold1_34(a, b, c, d);
        cold1_35(a, b, c, d);
        cold1_36(a, b, c, d);
      }
      mix1_9(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_10(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_37(a, b, c, d);
        cold1_38(a, b, c, d);
        cold1_39(a, b, c, d);
        cold1_40(a, b, c, d);
      }
      mix1_10(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_11(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_41(a, b, c, d);
        cold1_42(a, b, c, d);
        cold1_43(a, b, c, d);
        cold1_44(a, b, c, d);
      }
      mix1_11(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_12(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_45(a, b, c, d);
        cold1_46(a, b, c, d);
        cold1_47(a, b, c, d);
        cold1_48(a, b, c, d);
      }
      mix1_12(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_13(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_49(a, b, c, d);
        cold1_50(a, b, c, d);
        cold1_51(a, b, c, d);
        cold1_52(a, b, c, d);
      }
      mix1_13(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_14(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_53(a, b, c, d);
        cold1_54(a, b, c, d);
        cold1_55(a, b, c, d);
        cold1_56(a, b, c, d);
      }
      mix1_14(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_15(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_57(a, b, c, d);
        cold1_58(a, b, c, d);
        cold1_59(a, b, c, d);
        cold1_60(a, b, c, d);
      }
      mix1_15(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_16(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_61(a, b, c, d);
        cold1_62(a, b, c, d);
        cold1_63(a, b, c, d);
        cold1_64(a, b, c, d);
      }
      mix1_16(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_17(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_65(a, b, c, d);
        cold1_66(a, b, c, d);
        cold1_67(a, b, c, d);
        cold1_68(a, b, c, d);
      }
      mix1_17(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_18(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_69(a, b, c, d);
        cold1_70(a, b, c, d);
        cold1_71(a, b, c, d);
        cold1_72(a, b, c, d);
      }
      mix1_18(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_19(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_73(a, b, c, d);
        cold1_74(a, b, c, d);
        cold1_75(a, b, c, d);
        cold1_76(a, b, c, d);
      }
      mix1_19(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_20(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_77(a, b, c, d);
        cold1_78(a, b, c, d);
        cold1_79(a, b, c, d);
        cold1_80(a, b, c, d);
      }
      mix1_20(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_21(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_81(a, b, c, d);
        cold1_82(a, b, c, d);
        cold1_83(a, b, c, d);
        cold1_84(a, b, c, d);
      }
      mix1_21(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_22(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_85(a, b, c, d);
        cold1_86(a, b, c, d);
        cold1_87(a, b, c, d);
        cold1_88(a, b, c, d);
      }
      mix1_22(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_23(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_89(a, b, c, d);
        cold1_90(a, b, c, d);
        cold1_91(a, b, c, d);
        cold1_92(a, b, c, d);
      }
      mix1_23(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_24(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_93(a, b, c, d);
        cold1_94(a, b, c, d);
        cold1_95(a, b, c, d);
        cold1_96(a, b, c, d);
      }
      mix1_24(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_25(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_97(a, b, c, d);
        cold1_98(a, b, c, d);
        cold1_99(a, b, c, d);
        cold1_100(a, b, c, d);
      }
      mix1_25(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_26(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_101(a, b, c, d);
        cold1_102(a, b, c, d);
        cold1_103(a, b, c, d);
        cold1_104(a, b, c, d);
      }
      mix1_26(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_27(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_105(a, b, c, d);
        cold1_106(a, b, c, d);
        cold1_107(a, b, c, d);
        cold1_108(a, b, c, d);
      }
      mix1_27(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_28(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_109(a, b, c, d);
        cold1_110(a, b, c, d);
        cold1_111(a, b, c, d);
        cold1_112(a, b, c, d);
      }
      mix1_28(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_29(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_113(a, b, c, d);
        cold1_114(a, b, c, d);
        cold1_115(a, b, c, d);
        cold1_116(a, b, c, d);
      }
      mix1_29(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_30(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_117(a, b, c, d);
        cold1_118(a, b, c, d);
        cold1_119(a, b, c, d);
        cold1_120(a, b, c, d);
      }
      mix1_30(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_31(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_121(a, b, c, d);
        cold1_122(a, b, c, d);
        cold1_123(a, b, c, d);
        cold1_124(a, b, c, d);
      }
      mix1_31(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_32(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_125(a, b, c, d);
        cold1_126(a, b, c, d);
        cold1_127(a, b, c, d);
        cold1_128(a, b, c, d);
      }
      mix1_32(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_33(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_129(a, b, c, d);
        cold1_130(a, b, c, d);
        cold1_131(a, b, c, d);
        cold1_132(a, b, c, d);
      }
      mix1_33(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_34(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_133(a, b, c, d);
        cold1_134(a, b, c, d);
        cold1_135(a, b, c, d);
        cold1_136(a, b, c, d);
      }
      mix1_34(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_35(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_137(a, b, c, d);
        cold1_138(a, b, c, d);
        cold1_139(a, b, c, d);
        cold1_140(a, b, c, d);
      }
      mix1_35(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_36(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_141(a, b, c, d);
        cold1_142(a, b, c, d);
        cold1_143(a, b, c, d);
        cold1_144(a, b, c, d);
      }
      mix1_36(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_37(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_145(a, b, c, d);
        cold1_146(a, b, c, d);
        cold1_147(a, b, c, d);
        cold1_148(a, b, c, d);
      }
      mix1_37(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_38(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_149(a, b, c, d);
        cold1_150(a, b, c, d);
        cold1_151(a, b, c, d);
        cold1_152(a, b, c, d);
      }
      mix1_38(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_39(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_153(a, b, c, d);
        cold1_154(a, b, c, d);
        cold1_155(a, b, c, d);
        cold1_156(a, b, c, d);
      }
      mix1_39(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_40(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_157(a, b, c, d);
        cold1_158(a, b, c, d);
        cold1_159(a, b, c, d);
        cold1_160(a, b, c, d);
      }
      mix1_40(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_41(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_161(a, b, c, d);
        cold1_162(a, b, c, d);
        cold1_163(a, b, c, d);
        cold1_164(a, b, c, d);
      }
      mix1_41(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_42(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_165(a, b, c, d);
        cold1_166(a, b, c, d);
        cold1_167(a, b, c, d);
        cold1_168(a, b, c, d);
      }
      mix1_42(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_43(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_169(a, b, c, d);
        cold1_170(a, b, c, d);
        cold1_171(a, b, c, d);
        cold1_172(a, b, c, d);
      }
      mix1_43(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_44(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_173(a, b, c, d);
        cold1_174(a, b, c, d);
        cold1_175(a, b, c, d);
        cold1_176(a, b, c, d);
      }
      mix1_44(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_45(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_177(a, b, c, d);
        cold1_178(a, b, c, d);
        cold1_179(a, b, c, d);
        cold1_180(a, b, c, d);
      }
      mix1_45(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_46(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_181(a, b, c, d);
        cold1_182(a, b, c, d);
        cold1_183(a, b, c, d);
        cold1_184(a, b, c, d);
      }
      mix1_46(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_47(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_185(a, b, c, d);
        cold1_186(a, b, c, d);
        cold1_187(a, b, c, d);
        cold1_188(a, b, c, d);
      }
      mix1_47(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_48(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_189(a, b, c, d);
        cold1_190(a, b, c, d);
        cold1_191(a, b, c, d);
        cold1_192(a, b, c, d);
      }
      mix1_48(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_49(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_193(a, b, c, d);
        cold1_194(a, b, c, d);
        cold1_195(a, b, c, d);
        cold1_196(a, b, c, d);
      }
      mix1_49(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_50(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_197(a, b, c, d);
        cold1_198(a, b, c, d);
        cold1_199(a, b, c, d);
        cold1_200(a, b, c, d);
      }
      mix1_50(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_51(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_201(a, b, c, d);
        cold1_202(a, b, c, d);
        cold1_203(a, b, c, d);
        cold1_204(a, b, c, d);
      }
      mix1_51(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_52(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_205(a, b, c, d);
        cold1_206(a, b, c, d);
        cold1_207(a, b, c, d);
        cold1_208(a, b, c, d);
      }
      mix1_52(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_53(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_209(a, b, c, d);
        cold1_210(a, b, c, d);
        cold1_211(a, b, c, d);
        cold1_212(a, b, c, d);
      }
      mix1_53(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_54(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_213(a, b, c, d);
        cold1_214(a, b, c, d);
        cold1_215(a, b, c, d);
        cold1_216(a, b, c, d);
      }
      mix1_54(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_55(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_217(a, b, c, d);
        cold1_218(a, b, c, d);
        cold1_219(a, b, c, d);
        cold1_220(a, b, c, d);
      }
      mix1_55(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_56(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_221(a, b, c, d);
        cold1_222(a, b, c, d);
        cold1_223(a, b, c, d);
        cold1_224(a, b, c, d);
      }
      mix1_56(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_57(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_225(a, b, c, d);
        cold1_226(a, b, c, d);
        cold1_227(a, b, c, d);
        cold1_228(a, b, c, d);
      }
      mix1_57(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_58(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_229(a, b, c, d);
        cold1_230(a, b, c, d);
        cold1_231(a, b, c, d);
        cold1_232(a, b, c, d);
      }
      mix1_58(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_59(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_233(a, b, c, d);
        cold1_234(a, b, c, d);
        cold1_235(a, b, c, d);
        cold1_236(a, b, c, d);
      }
      mix1_59(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_60(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_237(a, b, c, d);
        cold1_238(a, b, c, d);
        cold1_239(a, b, c, d);
        cold1_240(a, b, c, d);
      }
      mix1_60(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_61(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_241(a, b, c, d);
        cold1_242(a, b, c, d);
        cold1_243(a, b, c, d);
        cold1_244(a, b, c, d);
      }
      mix1_61(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_62(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_245(a, b, c, d);
        cold1_246(a, b, c, d);
        cold1_247(a, b, c, d);
        cold1_248(a, b, c, d);
      }
      mix1_62(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_63(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_249(a, b, c, d);
        cold1_250(a, b, c, d);
        cold1_251(a, b, c, d);
        cold1_252(a, b, c, d);
      }
      mix1_63(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_64(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_253(a, b, c, d);
        cold1_254(a, b, c, d);
        cold1_255(a, b, c, d);
        cold1_256(a, b, c, d);
      }
      mix1_64(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_65(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_257(a, b, c, d);
        cold1_258(a, b, c, d);
        cold1_259(a, b, c, d);
        cold1_260(a, b, c, d);
      }
      mix1_65(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_66(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_261(a, b, c, d);
        cold1_262(a, b, c, d);
        cold1_263(a, b, c, d);
        cold1_264(a, b, c, d);
      }
      mix1_66(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_67(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_265(a, b, c, d);
        cold1_266(a, b, c, d);
        cold1_267(a, b, c, d);
        cold1_268(a, b, c, d);
      }
      mix1_67(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_68(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_269(a, b, c, d);
        cold1_270(a, b, c, d);
        cold1_271(a, b, c, d);
        cold1_272(a, b, c, d);
      }
      mix1_68(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_69(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_273(a, b, c, d);
        cold1_274(a, b, c, d);
        cold1_275(a, b, c, d);
        cold1_276(a, b, c, d);
      }
      mix1_69(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_70(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_277(a, b, c, d);
        cold1_278(a, b, c, d);
        cold1_279(a, b, c, d);
        cold1_280(a, b, c, d);
      }
      mix1_70(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_71(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_281(a, b, c, d);
        cold1_282(a, b, c, d);
        cold1_283(a, b, c, d);
        cold1_284(a, b, c, d);
      }
      mix1_71(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_72(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_285(a, b, c, d);
        cold1_286(a, b, c, d);
        cold1_287(a, b, c, d);
        cold1_288(a, b, c, d);
      }
      mix1_72(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_73(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_289(a, b, c, d);
        cold1_290(a, b, c, d);
        cold1_291(a, b, c, d);
        cold1_292(a, b, c, d);
      }
      mix1_73(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_74(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_293(a, b, c, d);
        cold1_294(a, b, c, d);
        cold1_295(a, b, c, d);
        cold1_296(a, b, c, d);
      }
      mix1_74(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_75(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_297(a, b, c, d);
        cold1_298(a, b, c, d);
        cold1_299(a, b, c, d);
        cold1_300(a, b, c, d);
      }
      mix1_75(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_76(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_301(a, b, c, d);
        cold1_302(a, b, c, d);
        cold1_303(a, b, c, d);
        cold1_304(a, b, c, d);
      }
      mix1_76(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_77(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_305(a, b, c, d);
        cold1_306(a, b, c, d);
        cold1_307(a, b, c, d);
        cold1_308(a, b, c, d);
      }
      mix1_77(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_78(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_309(a, b, c, d);
        cold1_310(a, b, c, d);
        cold1_311(a, b, c, d);
        cold1_312(a, b, c, d);
      }
      mix1_78(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_79(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_313(a, b, c, d);
        cold1_314(a, b, c, d);
        cold1_315(a, b, c, d);
        cold1_316(a, b, c, d);
      }
      mix1_79(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_80(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_317(a, b, c, d);
        cold1_318(a, b, c, d);
        cold1_319(a, b, c, d);
        cold1_320(a, b, c, d);
      }
      mix1_80(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_81(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_321(a, b, c, d);
        cold1_322(a, b, c, d);
        cold1_323(a, b, c, d);
        cold1_324(a, b, c, d);
      }
      mix1_81(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_82(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_325(a, b, c, d);
        cold1_326(a, b, c, d);
        cold1_327(a, b, c, d);
        cold1_328(a, b, c, d);
      }
      mix1_82(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_83(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_329(a, b, c, d);
        cold1_330(a, b, c, d);
        cold1_331(a, b, c, d);
        cold1_332(a, b, c, d);
      }
      mix1_83(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_84(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_333(a, b, c, d);
        cold1_334(a, b, c, d);
        cold1_335(a, b, c, d);
        cold1_336(a, b, c, d);
      }
      mix1_84(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_85(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_337(a, b, c, d);
        cold1_338(a, b, c, d);
        cold1_339(a, b, c, d);
        cold1_340(a, b, c, d);
      }
      mix1_85(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_86(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_341(a, b, c, d);
        cold1_342(a, b, c, d);
        cold1_343(a, b, c, d);
        cold1_344(a, b, c, d);
      }
      mix1_86(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_87(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_345(a, b, c, d);
        cold1_346(a, b, c, d);
        cold1_347(a, b, c, d);
        cold1_348(a, b, c, d);
      }
      mix1_87(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_88(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_349(a, b, c, d);
        cold1_350(a, b, c, d);
        cold1_351(a, b, c, d);
        cold1_352(a, b, c, d);
      }
      mix1_88(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_89(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_353(a, b, c, d);
        cold1_354(a, b, c, d);
        cold1_355(a, b, c, d);
        cold1_356(a, b, c, d);
      }
      mix1_89(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_90(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_357(a, b, c, d);
        cold1_358(a, b, c, d);
        cold1_359(a, b, c, d);
        cold1_360(a, b, c, d);
      }
      mix1_90(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_91(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_361(a, b, c, d);
        cold1_362(a, b, c, d);
        cold1_363(a, b, c, d);
        cold1_364(a, b, c, d);
      }
      mix1_91(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_92(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_365(a, b, c, d);
        cold1_366(a, b, c, d);
        cold1_367(a, b, c, d);
        cold1_368(a, b, c, d);
      }
      mix1_92(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_93(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_369(a, b, c, d);
        cold1_370(a, b, c, d);
        cold1_371(a, b, c, d);
        cold1_372(a, b, c, d);
      }
      mix1_93(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_94(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_373(a, b, c, d);
        cold1_374(a, b, c, d);
        cold1_375(a, b, c, d);
        cold1_376(a, b, c, d);
      }
      mix1_94(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_95(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_377(a, b, c, d);
        cold1_378(a, b, c, d);
        cold1_379(a, b, c, d);
        cold1_380(a, b, c, d);
      }
      mix1_95(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_96(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_381(a, b, c, d);
        cold1_382(a, b, c, d);
        cold1_383(a, b, c, d);
        cold1_384(a, b, c, d);
      }
      mix1_96(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_97(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_385(a, b, c, d);
        cold1_386(a, b, c, d);
        cold1_387(a, b, c, d);
        cold1_388(a, b, c, d);
      }
      mix1_97(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_98(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_389(a, b, c, d);
        cold1_390(a, b, c, d);
        cold1_391(a, b, c, d);
        cold1_392(a, b, c, d);
      }
      mix1_98(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_99(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_393(a, b, c, d);
        cold1_394(a, b, c, d);
        cold1_395(a, b, c, d);
        cold1_396(a, b, c, d);
      }
      mix1_99(a, b, c, d);
    }
    for (uint32_t j = 0; j < iter_count; ++j) {
      hot1_100(a, b, c, d);
      if (i % 1000 == 0 && j == 0) {
        cold1_397(a, b, c, d);
        cold1_398(a, b, c, d);
        cold1_399(a, b, c, d);
        cold1_400(a, b, c, d);
      }
      mix1_100(a, b, c, d);
    }
  }
  return (int)(a + b + c + d);
}
