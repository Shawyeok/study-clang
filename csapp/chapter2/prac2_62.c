#include <stdio.h>

int int_shifts_are_arithmetic();

main() {
  int isArithmeticShifts =  int_shifts_are_arithmetic();
  printf("isArithmeticShifts: %d\n", isArithmeticShifts);
}

int int_shifts_are_arithmetic() {
  int x = 0xf0 << ((sizeof(int)-1) << 3);
  int y = 0xff << ((sizeof(int)-1) << 3);
  return !(x>>4^y);
}
