#include<stdio.h>
int main(void)
{
	int day;
	int zone;
	int ans = 1;

	printf("�j����I�����Ă��������B\n");
	printf("0�����j���A1�����j�A2���Ηj�A3�����j�A4���ؗj�A5�����j�A6���y�j\n");
	scanf_s("%d", &day);
	printf("���ԑт�I�����Ă��������B\n");
	printf("0���ߑO�A1���ߌ�A2�����\n");
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
		printf("�f�Â��Ă��܂��B\n");
	}
	else
	{
		printf("�x�f���Ă��܂��B\n");
	}

	return 0;
}
