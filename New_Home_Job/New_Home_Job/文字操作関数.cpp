//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	
//	int a,c;
//	a = 1;
//	int num;
//	printf("��������͂��Ă��������B\n");
//	c = getchar();
//
//	while (a)
//	{
//
//		printf("\n�ǂ̕������ނ��s���܂����H\n");
//		printf("1:isalnum\n");
//		printf("2:isalpha\n");
//		printf("3:isdigit\n");
//		printf("4:islower\n");
//		printf("5:isupper\n");
//		printf("6:isxdigit\n");
//		printf("7:tolower\n");
//		printf("8:toupper\n");
//		printf("0:�I��\n");
//		scanf_s("%d", &num);
//
//		switch (num)
//		{
//		case 1:
//			//isalnum�֐��i�ϐ�c��A�`Z,a�`z,0�`9�ł��邩�ǂ����j
//			if (isalnum(c))
//			{
//				printf("\n%c�͉p�����ł��B\n", c);
//			}
//			else
//			{
//				printf("\n%c�͉p�����ł͂���܂���B\n", c);
//			}
//			break;
//		case 2:
//			//isalpha�֐��i�ϐ�c��A�`Z,a�`z�ł��邩�ǂ����j
//			if (isalpha(c))
//			{
//				printf("\n%c�͉p�����ł��B\n", c);
//
//			}
//			else
//			{
//				printf("\n%c�͉p�����ł͂���܂���B\n", c);
//			}
//			break;
//		case 3:
//			//isdigit�֐��i�ϐ�c�������ł��邩�ǂ����j
//			if (isdigit(c))
//			{
//				printf("\n%c�͐����ł��B\n", c);
//			}
//			else
//			{
//				printf("\n%c�͐����ł͂���܂���B\n", c);
//			}
//			break;
//		case 4:
//			//islower�֐��i�ϐ�c��������a�`���ł��邩�ǂ����j
//			if (islower(c))
//			{
//				printf("\n%c�͏������ł��B\n", c);
//			}
//			else
//			{
//				printf("\n%c�͏������ł͂���܂���B\n", c);
//			}
//			break;
//		case 5:
//			//isupper�֐��i�ϐ�c���啶��A�`Z�ł��邩�ǂ����j
//			if (isupper(c))
//			{
//				printf("\n%c�͑啶���ł��B\n", c);
//			}
//			else
//			{
//				printf("\n%c�͑啶���ł͂���܂���B\n", c);
//			}
//			break;
//		case 6:
//			//isxdigit�֐��i�ϐ�c��16�i��0�`9�CA�`F�Ca�`f�ł��邩�ǂ����j
//			if (isxdigit(c))
//			{
//				printf("\n%c�͂P�U�i���ł��B\n", c);
//			}
//			else
//			{
//				printf("\n%c�͂P�U�i���ł͂���܂���B\n", c);
//			}
//			break;
//		case 7:
//			//tolower�֐��i�ϐ�c��������a�`���ɂ���j
//
//			printf("\n%c�͏������ł��B\n",tolower(c));
//
//			break;
//		case 8:
//			//toupper�֐��i�ϐ�c��啶��A�`Z�ɂ���j
//			
//			printf("\n%c�͑啶���ł��B\n", toupper(c));
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
//}