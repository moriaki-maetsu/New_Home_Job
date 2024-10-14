#include<stdio.h>

int main(void)
{
	int a;
	int* pa;
	
	a = 5;
	pa = &a;
	
	printf("変数aの値は%dです。\n", a);
	printf("変数aのアドレスは%pです。\n", &a);
	printf("ポインタpaの値は%pです。\n", pa);
	printf("*paの値は%dです。\n", *pa);

	*pa = 100;
	printf("変数aの中身をポインタを用いて書き換えました。\n");
	printf("変数aの値は%dです。\n", a);
	
		return 0;
}