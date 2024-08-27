#include<stdio.h>

int is_even(int num)
{
	return num % 2;
}

int main(void)
{
	int num, ans;
	printf("整数（0）か奇数（1）か調べたい数字を入力：");
	scanf_s("%d", &num);
	ans = is_even(num);

	printf("入力された数字は%dです。", ans);

	return 0;
}