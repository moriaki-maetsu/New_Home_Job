#include<stdio.h>

int main(void)
{
	int a = 0;
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			//ビット論理積（アンド）両辺とも１なら1になる
			a = i & j;
			printf("%4d回目：",i+1);
			printf("%4d\n", a);
		}
	}
	return 0;
}