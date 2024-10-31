//#include<stdio.h>
//
//struct test
//{
//	char name[50];
//	int point;
//	char value;
//
//};
//
//void testvalue(test* Math);
//
//int main(void)
//{
//	test Math;
//	printf("名前は？\n");
//	scanf_s("%s", Math.name,50);
//	printf("得点は？\n");
//	scanf_s("%d", &Math.point);
//
//	testvalue(&Math);
//
//	printf("%s,%d点,成績%c", Math.name, Math.point, Math.value);
//
//	return 0;
//}
//
//void testvalue(test* Math)
//{
//	if (Math->point >= 80)
//	{
//		Math->value = 'A';
//	}
//	else if (Math->point >= 70)
//	{
//		Math->value = 'B';
//	}
//	else
//	{
//		Math->value = 'C';
//	}
//}