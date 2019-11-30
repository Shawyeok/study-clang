#include <stdio.h>

int mix(int x, int y);

main() {
  int x = 0x89abcdef;
  int y = 0x76543210;
  printf("x: %x, y: %x, mix(x,y): %x\n", x, y, mix(x, y));
}

int mix(int x, int y) {
  return (x & 0xff) | (~0xff & y);
}