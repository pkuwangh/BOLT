#include "utils.h"

uint32_t rand_int() {
  static uint32_t seed = 100;
  // linear congurential generator
  const uint32_t a = 1103515245;
  const uint32_t c = 12345;
  seed = (a * seed + c) % ((uint32_t)(1) << 30);
  return (seed % 10000);
}
