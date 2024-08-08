#include<stdio.h>

int main(void)
{
	int a = 0b0000;
	int b = 0b0000;
	int c;
	int i;
	int abc[4];

	c = a & b;
	for (i = 0; i < 4; i++) {
		abc[i] = c % 2;
		c /= 2;
	}
	printf("0b0000 & 0b0000");
	
	while (i > 0) {
		printf("%d", abc[--i]);
	}
	
	printf("\n");

	a = 0b1001;
	b = 0b0101;
	c = a & b;
	for (i = 0; i < 4; i++) {
		abc[i] = c % 2;
		c /= 2;
	}
	printf("0b1001 & 0b0101");

	while (i > 0) {
		printf("%d", abc[--i]);
	}

	printf("\n");

	a = 0b1100;
	b = 0b1001;
	c = a & b;
	for (i = 0; i < 4; i++) {
		abc[i] = c % 2;
		c /= 2;
	}
	printf("0b1100 & 0b1001");

	while (i > 0) {
		printf("%d", abc[--i]);
	}

	printf("\n");

	a = 0b1010;
	b = 0b1011;
	c = a & b;
	for (i = 0; i < 4; i++) {
		abc[i] = c % 2;
		c /= 2;
	}
	printf("0b1010 & 0b1011");

	while (i > 0) {
		printf("%d", abc[--i]);
	}

	printf("\n");

	a = 0b0111;
	b = 0b1110;
	c = a & b;
	for (i = 0; i < 4; i++) {
		abc[i] = c % 2;
		c /= 2;
	}
	printf("0b0111 & 0b1110");

	while (i > 0) {
		printf("%d", abc[--i]);
	}

	printf("\n");
	
	
}