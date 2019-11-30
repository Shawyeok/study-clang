#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b);

main() {
  printf("replace_byte(0x12345678, 0, 0xAB) => 0x%x\n", replace_byte(0x12345678, 0, 0xAB));
  printf("replace_byte(0x12345678, 2, 0xAB) => 0x%x\n", replace_byte(0x12345678, 2, 0xAB));
}

unsigned replace_byte(unsigned x, int i, unsigned char b) {
  return x & ~(0xff << (i * 8)) | (((unsigned) b) << (i * 8));
}