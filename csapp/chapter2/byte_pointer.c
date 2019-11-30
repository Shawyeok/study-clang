#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	size_t i;
	for (i = 0; i < len; i++)
		printf("%.2x", start[i]);
	printf("\n");
}

void show_char(int x) {
	show_bytes((byte_pointer) &x, sizeof(char));
}

void show_short(int x) {
	show_bytes((byte_pointer) &x, sizeof(short));
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_long(long x) {
	show_bytes((byte_pointer) &x, sizeof(long));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_double(double x) {
	show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_string(char *x) {
	show_bytes((byte_pointer) x, strlen(x));
}

main() {
	char cval = 123;
	short sval = -12345;
	int ival = sval;
	long lval = sval;
	float fval = (float) ival;
	double dval = (double) ival;
	int *pval = &ival;
	printf("the bytes of a char value: ");
	show_char(cval);
	printf("the bytes of a short value: ");
	show_short(sval);
	printf("the bytes of a int value: ");
	show_int(ival);
	printf("the bytes of a long value: ");
	show_long(lval);
	printf("the bytes of a float value: ");
	show_float(fval);
	printf("the bytes of a double value: ");
	show_double(dval);
	printf("the bytes of a pointer value: ");
	show_pointer(pval);
	char *strval = "abcdef";
	printf("the bytes of a string: ");
	show_string(strval);
	return 0;
}
