#include<stdio.h>

int is_even(int num)
{
	return num % 2;
}

int main(void)
{
	int num, ans;
	printf("�����i0�j����i1�j�����ׂ�����������́F");
	scanf_s("%d", &num);
	ans = is_even(num);

	printf("���͂��ꂽ������%d�ł��B", ans);

	return 0;
}