#include<stdio.h>

int a = 0;

/*func関数の定義*/
void func(void)
{
	int c = 2;
	int a = 0;
	a++;
	printf("func関数では変数aと変数cが使えます。\n");
	printf("変数aの値は%dです。\n", a);
	//printf("変数bの値は%dです。\n", b);
	printf("変数cの値は%dです。\n", c);
}

int main(void)
{
	int b = 1;
	a++;

	printf("main関数では変数aと変数bが使えます。\n");
	printf("変数aの値は%dです。\n", a);
	printf("変数bの値は%dです。\n", b);
	//printf("変数cの値は%dです。\n", c);

	func();

	int e = 0;
	for (int i = 0; i < 5; i++)
	{
		e++;
		printf("%d\n", e);
		if (i == 2)
		{
			break;
		}
	
	}

	if (i == 2);
	{
		break;
	}
	

	return 0;
}