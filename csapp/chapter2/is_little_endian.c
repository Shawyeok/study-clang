#include <stdio.h>

typedef unsigned char *byte_pointer;

main() {
  unsigned int val = 1;
  byte_pointer bp = (byte_pointer) &val;
  printf("Is it a little endian matchine? (1=>y, 0=>n): %d\n", 1 & bp[0]);
}