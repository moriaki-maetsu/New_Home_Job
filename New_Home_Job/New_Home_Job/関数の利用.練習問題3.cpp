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
	printf("’²‚×‚½‚¢•¶š‚ğ“ü—ÍF");
	moji = getchar();
	printf("’²‚×‚½‚¢•¶š—ñ‚ğ“ü—ÍF");
	scanf_s("%s", str, 1000);
	
	cnt = count_char(str, moji);

	printf("•¶š—ñ’†‚É%c‚Í%dŒÂ‚ ‚è‚Ü‚·B\n",moji, cnt);

	return 0;

}