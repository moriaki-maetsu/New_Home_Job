#include<stdio.h>

void kuku(int num)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d×%d=%d\n",num,i,num*i);
	}
	
}

int main(void)
{
	int num;
	printf("何の段を計算しますか？\n");
	scanf_s("%d", &num);
	kuku(num);

	return 0;
}