#include<stdio.h>

int main(void)
{
	int a;
	int* pa;
	
	a = 5;
	pa = &a;
	
	printf("�ϐ�a�̒l��%d�ł��B\n", a);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);
	printf("�|�C���^pa�̒l��%p�ł��B\n", pa);
	printf("*pa�̒l��%d�ł��B\n", *pa);

	*pa = 100;
	printf("�ϐ�a�̒��g���|�C���^��p���ď��������܂����B\n");
	printf("�ϐ�a�̒l��%d�ł��B\n", a);
	
		return 0;
}