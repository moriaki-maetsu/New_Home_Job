//#include<stdio.h>
//
//
//struct POINT
//{
//	int x;
//	int y;
//};
//
//void BIG(POINT num);
//
//int main(void)
//{
//	POINT num;
//	printf("値を一つ入力\n");
//	scanf_s("%d", &num.x);
//	printf("値を一つ入力\n");
//	scanf_s("%d", &num.y);
//
//	BIG(num);
//
//	return 0;
//}
//
//void BIG(POINT num)
//{
//	int i;
//	printf("どちらの値はBIGにしますか？\n");
//	printf("1:ｘ、2：ｙ\n");
//	scanf_s("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("ｘをＢＩＧにします。\n");
//		printf("%d\n", num.x * 50);
//		break;
//	case 2:
//		printf("yをＢＩＧにします。\n");
//		printf("%d\n", num.y * 50);
//		break;
//		
//	}
//}