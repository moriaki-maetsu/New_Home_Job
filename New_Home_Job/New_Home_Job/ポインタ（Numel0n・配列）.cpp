//#include<stdio.h>
//
///*
//GetNumber�֐���鎖���X�g
//�@�����������B
//�AScanf�Q���̊i�[������B
//
//CheckNum�֐���鎖���X�g
//�@�����������B
//
//main�֐���鎖���X�g
//�@GetNumber�֐��̎��������w�肷��B
//�ACheckNum�֐��̎��������w�肷��B
//�B���s���ăG���[���o�Ȃ����Ƃ��m�F����B
//*/
//
//void GetNumber(�@)
//{
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d�P�^�ڂ���́F",i+1);
//		scanf_s("%d",�@);
//	}
//	
//}
//
// int  CheckNum(�@)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int f = i + 1; f < 4; f++)
//		{
//			if (num[i] == num[f])
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//
//int main(void)
//{
//	int Num[4];
//	
//	while (1)
//	{
//		GetNumber(�@);
//					
//		if (CheckNum(�@) == 1)
//		{
//			printf("�������l���g���Ă��܂��B\n");
//		}
//		else
//		{
//			printf("�������l���g���Ă��܂���B\n");
//		}
//	}
//	
//	return 0;
//}