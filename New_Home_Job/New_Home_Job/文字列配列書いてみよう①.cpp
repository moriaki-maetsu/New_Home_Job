#include<stdio.h>
int main(void)
{
	char moji[] = "Hello Word";
	char str[12];

	printf("%s\n", moji);
	moji[0] = 'A';
	printf("%s\n", moji);

	printf("文字列を入力してください。\n");
	scanf_s("%s", str,12);

	printf("入力した文字列は%sです。", str);

	return 0;
}