#include <stdio.h>

int test(int x);

main() {
  int x;
  scanf("%x", &x);
  printf("test(0x%X): %d\n", x, test(x));
}

int test(int x) {
  int int_with_highest_byte_zero = ~(0xff << ((sizeof(int)-1) * 8));
  return 0 || 
    !(x ^ ~0) || 
    !(x ^ 0) || 
    !((x & 0xff) ^ 0xff) || 
    !(x | int_with_highest_byte_zero ^ int_with_highest_byte_zero);
}