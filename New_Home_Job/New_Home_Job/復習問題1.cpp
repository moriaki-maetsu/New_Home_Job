#include<stdio.h>
int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8;
	int ans1, ans2, ans3;
	float ans4;

	printf("�����l��8���͂��Ă��������B\n");
	printf("1�ځF");
	scanf_s("%d", &num1);
	printf("2�ځF");
	scanf_s("%d", &num2);
	printf("3�ځF");
	scanf_s("%d", &num3);
	printf("4�ځF");
	scanf_s("%d", &num4);
	printf("5�ځF");
	scanf_s("%d", &num5);
	printf("6�ځF");
	scanf_s("%d", &num6);
	printf("7�ځF");
	scanf_s("%d", &num7);
	printf("8�ځF");
	scanf_s("%d", &num8);

	ans1 = num1 + num2;
	ans2 = num3 - num4;
	ans3 = num5 * num6;
	ans4 = (float)num7 / (float)num8;

	printf("%d �{ %d ��%d�ł��B\n", num1, num2, ans1);
	printf("%d �| %d ��%d�ł��B\n", num3, num4, ans2);
	printf("%d �~ %d ��%d�ł��B\n", num5, num6, ans3);
	printf("%d �� %d ��%f�ł��B\n", num7, num8, ans4);
	
	return 0;
}