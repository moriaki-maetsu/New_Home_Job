#include<stdio.h>

int main(void)
{
	int a = 0;
	int* p = &a;
	
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);
	printf("�|�C���^���̃A�h���X��%p�ł��B\n", p);
	printf("�|�C���^���̒l��%d�ł��B\n", *p);
	printf("�|�C���^���g���ĕϐ�a�̒l��10�ɕύX���܂����B\n");
	
	*p = 10;
	
	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("\n");

	int num[5] = { 10,20,30,40,50 };
	int* pnum = num;

	printf("�z��num�̃A�h���X��%p�ł��B\n", num);
	printf("�|�C���^�ϐ�pnum�̃A�h���X��%p�ł��B\n", pnum);
	printf("�z��num[0]�̒l��%d�ł��B\n", num[0]);
	printf("�z��num�̒l��%d�ł��B\n", *num);
	printf("�|�C���^�ϐ�pnum�̒l��%d�ł��B\n", *pnum);
	printf("\n");

	//�|�C���^���Z�̖��
	printf("�z��num[0]+1������̃A�h���X��%p�ł��B\n", num + 1);
	printf("�z��num[0]+1������̒l��%d�ł��B\n", *(num + 1));
	printf("\n");

	
	printf("�|�C���^�ϐ�pnum���C���N�������g���܂����B\n");
	
	pnum++;
	
	printf("�|�C���^�ϐ�pnum�̃A�h���X��%p�ł��B\n", pnum);
	printf("�|�C���^�ϐ�pnum�̒l��%d�ł��B\n", *pnum);

	printf("�|�C���^�ϐ�pnum��");

}