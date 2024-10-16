//#include<stdio.h>
//
//int Add(int* num1,int* num2)
//{
//	int point;
//	printf("加算する点数を入力してください。\n");
//	scanf_s("%d", &point);
//	*num1 = *num1 + point;
//	*num2 = *num2 + point;
//
//	return point;
//}
//
//int main(void)
//{
//	int num1, num2;
//	int add;
//	printf("２科目の点数を入力。\n");
//	scanf_s("%d", &num1);
//	scanf_s("%d", &num2);
//
//	add = Add(&num1, &num2);
//
//	printf("%d点加算しましたので\n",add );
//	printf("科目1は%d点\n",num1 );
//	printf("科目2は%d点\n",num2 );
//
//
//	return 0;
//
//
//}