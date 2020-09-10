## Build Instructions

First, clone llvm & clone bolt into llvm/tools/llvm-bolt.
Then, install cmake, ninja-build.
Last, cmake/ninja build in llvm/.
Actual cmake command can be found in llvm-bolt/README.md:
```
> cmake -G Ninja ../llvm -DLLVM_TARGETS_TO_BUILD="X86;AArch64" -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_ASSERTIONS=ON
```

