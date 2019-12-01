#include <stdio.h>

unsigned srl(unsigned x, int k);

int sra(int x, int k);

main() {
  int x, k;
  scanf("%x", &x);
  k = 4;
  printf("srl(0x%.8X, %d): 0x%.8X\n", x, k, srl((unsigned) x, k));
  printf("sra(0x%.8X, %d): 0x%.8X\n", x, k, sra(x, k));
}

unsigned srl(unsigned x, int k) {
  /* Perform shift arithmetically */
  unsigned xsra = (int) x >> k;
  int w = sizeof(int) << 3;
  return xsra & ((1 << (w - k)) - 1);
}

int sra(int x, int k) {
  /* Perform shift logically */
  int xsrl = (unsigned) x >> k;
  int w = sizeof(int) << 3;
  int i = !(x & (1 << (w - 1)) ^ (1 << (w - 1)));
  int y = ~((unsigned) (i << k) - 1) << (w - 2 * k);
  return xsrl | y;
}