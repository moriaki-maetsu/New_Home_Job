//#include<stdio.h>
//
//int atmFunc(short card, short pin, long reqMoney, long* pMoney, long* pBalance)
//{
//	//ポインタによる結果の出力
//	*pMoney = 10000;
//	*pBalance = 40000;
//
//	return 0;  //引き出し結果：正常
//}
//
//int main(void)
//{
//	int result;		//引き出し結果
//	long money;		//お金
//	long balance;	//預金残高
//
//	result = atmFunc(0x1234, 0x9999, 10000, &money, &balance);
//
//	printf("%d, %d, %d\n", result, money, balance);
//
//	return 0;
//}