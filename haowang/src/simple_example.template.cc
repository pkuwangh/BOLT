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
