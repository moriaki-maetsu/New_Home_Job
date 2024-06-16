//#include<stdio.h>
//#define NUM 5
//int main(void)
//{
//	int test[NUM];
//	int tmp;
//	int i, j, s, t;
//
//	//テストの点数を取得するコード
//	printf("%d人の点数を入力してください。\n", NUM);
//	for (i = 0; i < NUM; i++)
//	{
//		scanf_s("%d", &test[i]);
//	}
//
//	//昇順（テストの点数が高い順）にソート（入れ替え）を行うコード
//	for (s = 0; s < NUM; s++)
//	{
//		for (t = s + 1; t < NUM; t++)
//		{
//			if (test[t] > test[s])
//			{
//				tmp = test[t];
//				test[t] = test[s];
//				test[s] = tmp;
//			}
//		}
//	}
//
//	//入れ替え後の点数を出力するコード
//	for (j = 0; j < NUM; j++)
//	{
//		printf("%d番目の人の点数は%dです。\n", j + 1, test[j]);
//	}
//	return 0;
//}