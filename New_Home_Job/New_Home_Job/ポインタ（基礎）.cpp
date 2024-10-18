#include<stdio.h>

int main(void)
{
	int a = 0;
	int* p = &a;
	
	printf("変数aのアドレスは%pです。\n", &a);
	printf("ポインタｐのアドレスは%pです。\n", p);
	printf("ポインタｐの値は%dです。\n", *p);
	printf("ポインタを使って変数aの値を10に変更しました。\n");
	
	*p = 10;
	
	printf("変数aの値は%dです。\n",a);
	printf("\n");

	int num[5] = { 10,20,30,40,50 };
	int* pnum = num;

	printf("配列numのアドレスは%pです。\n", num);
	printf("ポインタ変数pnumのアドレスは%pです。\n", pnum);
	printf("配列num[0]の値は%dです。\n", num[0]);
	printf("配列numの値は%dです。\n", *num);
	printf("ポインタ変数pnumの値は%dです。\n", *pnum);
	printf("\n");

	//ポインタ演算の問題
	printf("配列num[0]+1した先のアドレスは%pです。\n", num + 1);
	printf("配列num[0]+1した先の値は%dです。\n", *(num + 1));
	printf("\n");

	
	printf("ポインタ変数pnumをインクリメントしました。\n");
	
	pnum++;
	
	printf("ポインタ変数pnumのアドレスは%pです。\n", pnum);
	printf("ポインタ変数pnumの値は%dです。\n", *pnum);

	printf("ポインタ変数pnumを");

}