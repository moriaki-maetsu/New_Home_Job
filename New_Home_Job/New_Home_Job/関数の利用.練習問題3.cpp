#include<stdio.h>

int count_char(char str[], char moji)
{
	int cnt=0;

	for(int i=0;str[i]!='\0'; i++)
	{
		if (str[i] == moji)
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	char str[1000];
	char moji;
	int cnt;
	printf("調べたい文字を入力：");
	moji = getchar();
	printf("調べたい文字列を入力：");
	scanf_s("%s", str, 1000);
	
	cnt = count_char(str, moji);

	printf("文字列中に%cは%d個あります。\n",moji, cnt);

	return 0;

}