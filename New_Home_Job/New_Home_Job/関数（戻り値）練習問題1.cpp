//#include<stdio.h>
//
//int tasizan(int num1, int num2)
//{
//	int answer1;
//	answer1 = num1 + num2;
//	return answer1;
//}
//
//int hikizan(int num1, int num2)
//{
//	int answer1;
//	answer1 = num1 - num2;
//	return answer1;
//}
//
//int kakezan(int num1, int num2)
//{
//	int answer1;
//	answer1 = num1 * num2;
//	return answer1;
//}
//
//int warizan(int num1, int num2)
//{
//	int answer1;
//	answer1 = num1 / num2;
//	return answer1;
//}
//
//int main(void)
//{
//	int answer[4];
//	int num1, num2;
//
//	printf("値を１つ入力：");
//	scanf_s("%d", &num1);
//
//	printf("値を１つ入力：");
//	scanf_s("%d", &num2);
//
//	answer[0] = tasizan(num1, num2);
//	printf("たし算の結果は%dです。\n", answer[0]);
//
//	answer[1] = hikizan(num1, num2);
//	printf("ひき算の結果は%dです。\n", answer[1]);
//
//	answer[2] = kakezan(num1, num2);
//	printf("かけ算の結果は%dです。\n", answer[2]);
//
//	answer[3] = warizan(num1, num2);
//	printf("わり算の結果は%fです。\n", (float)answer[3]);
//
//	return 0;
//}