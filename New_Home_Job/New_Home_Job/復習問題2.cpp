#include<stdio.h>
int main(void)
{
	int day;
	int zone;
	int ans = 1;

	printf("曜日を選択してください。\n");
	printf("0＝日曜日、1＝月曜、2＝火曜、3＝水曜、4＝木曜、5＝金曜、6＝土曜\n");
	scanf_s("%d", &day);
	printf("時間帯を選択してください。\n");
	printf("0＝午前、1＝午後、2＝夜間\n");
	scanf_s("%d", &zone);

	if (day == 0)
	{
		ans = 0;
	}
	if (day == 6 && zone == 1)
	{
		ans = 0;
	}
	if (day == 3 && zone == 2)
	{
		ans = 0;
	}

	if (ans == 1)
	{
		printf("診療しています。\n");
	}
	else
	{
		printf("休診しています。\n");
	}

	return 0;
}
