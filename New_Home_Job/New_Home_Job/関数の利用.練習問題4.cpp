#include<stdio.h>

int sum_array(int num[], int size)
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += num[i];
	}
	return sum;
}

int main(void)
{
	int size,sum;
	int num[5];

	printf("あらかじめ決めた要素数を教えてください\n");
	scanf_s("%d", &size);
	printf("配列に数値を代入します。\n好きな数値を入力してください。\n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &num[i]);
	}

	sum = sum_array(num, size);

	printf("配列の合計は%dです。\n", sum);
	return 0;

}