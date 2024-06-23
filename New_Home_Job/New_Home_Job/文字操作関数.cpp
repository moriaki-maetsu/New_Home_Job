//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	
//	int a,c;
//	a = 1;
//	int num;
//	printf("文字を入力してください。\n");
//	c = getchar();
//
//	while (a)
//	{
//
//		printf("\nどの文字分類を行いますか？\n");
//		printf("1:isalnum\n");
//		printf("2:isalpha\n");
//		printf("3:isdigit\n");
//		printf("4:islower\n");
//		printf("5:isupper\n");
//		printf("6:isxdigit\n");
//		printf("7:tolower\n");
//		printf("8:toupper\n");
//		printf("0:終了\n");
//		scanf_s("%d", &num);
//
//		switch (num)
//		{
//		case 1:
//			//isalnum関数（変数cがA～Z,a～z,0～9であるかどうか）
//			if (isalnum(c))
//			{
//				printf("\n%cは英数字です。\n", c);
//			}
//			else
//			{
//				printf("\n%cは英数字ではありません。\n", c);
//			}
//			break;
//		case 2:
//			//isalpha関数（変数cがA～Z,a～zであるかどうか）
//			if (isalpha(c))
//			{
//				printf("\n%cは英文字です。\n", c);
//
//			}
//			else
//			{
//				printf("\n%cは英文字ではありません。\n", c);
//			}
//			break;
//		case 3:
//			//isdigit関数（変数cが数字であるかどうか）
//			if (isdigit(c))
//			{
//				printf("\n%cは数字です。\n", c);
//			}
//			else
//			{
//				printf("\n%cは数字ではありません。\n", c);
//			}
//			break;
//		case 4:
//			//islower関数（変数cが小文字a～ｚであるかどうか）
//			if (islower(c))
//			{
//				printf("\n%cは小文字です。\n", c);
//			}
//			else
//			{
//				printf("\n%cは小文字ではありません。\n", c);
//			}
//			break;
//		case 5:
//			//isupper関数（変数cが大文字A～Zであるかどうか）
//			if (isupper(c))
//			{
//				printf("\n%cは大文字です。\n", c);
//			}
//			else
//			{
//				printf("\n%cは大文字ではありません。\n", c);
//			}
//			break;
//		case 6:
//			//isxdigit関数（変数cが16進数0～9，A～F，a～fであるかどうか）
//			if (isxdigit(c))
//			{
//				printf("\n%cは１６進数です。\n", c);
//			}
//			else
//			{
//				printf("\n%cは１６進数ではありません。\n", c);
//			}
//			break;
//		case 7:
//			//tolower関数（変数cを小文字a～ｚにする）
//
//			printf("\n%cは小文字です。\n",tolower(c));
//
//			break;
//		case 8:
//			//toupper関数（変数cを大文字A～Zにする）
//			
//			printf("\n%cは大文字です。\n", toupper(c));
//									
//			break;
//
//		default:
//			a = 0;
//			break;
//		}
//
//
//
//	}
//	return 0;
//}