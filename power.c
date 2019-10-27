#include <stdio.h>

int main() {
	int p = power(2, 10);
	printf("p: %d\n", p);
}

int power(int base, int n) {
	int p = 1;
	for (; n>0; n--) {
		p = p * base;
	}
	return p;
}
