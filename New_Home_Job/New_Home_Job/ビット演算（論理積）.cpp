//#include<stdio.h>
//
//int main(void)
//{
//	short int a = 0b0101;
//	short int b = 0b0001;
//	unsigned int c;
//	int i;
//	int abc[4];
//
//	c = a & b;
//	for (i = 0; i < 4; i++) {
//		abc[i] = c % 2;
//		c /= 2;
//	}
//	printf("0b0101 & 0b0001");
//	
//	while (i > 0) {
//		printf("%d", abc[--i]);
//	}
//	
//	printf("\n");
//
//	a = 0b1001;
//	b = 0b0101;
//	c = a | b;
//	for (i = 0; i < 4; i++) {
//		abc[i] = c % 2;
//		c /= 2;
//	}
//	printf("0b1001 | 0b0101");
//
//	while (i > 0) {
//		printf("%d", abc[--i]);
//	}
//
//	printf("\n");
//
//	a = 0b1100;
//	b = 0b1001;
//	c = a ^ b;
//	for (i = 0; i < 4; i++) {
//		abc[i] = c % 2;
//		c /= 2;
//	}
//	printf("0b1100 ^ 0b1001");
//
//	while (i > 0) {
//		printf("%d", abc[--i]);
//	}
//
//	printf("\n");
//
//	a = 0b1100;
//	c = ~a;
//	printf("~0b1010= ");
//	for (i = 0; i < 4; i++) {
//		abc[i] = c % 2;
//		c /= 2;
//	}
//	while (i > 0) {
//		printf("%d", abc[--i]);
//	}
//
//	
//
//	printf("\n");
//
//	a = 0b0111;
//	c = a << 2;
//	for (i = 0; i < 4; i++) {
//		abc[i] = c % 2;
//		c /= 2;
//	}
//	printf("0b0111 << 2:");
//
//	while (i > 0) {
//		printf("%d", abc[--i]);
//	}
//
//	printf("\n");
//	
//	
//}