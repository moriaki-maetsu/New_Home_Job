#include<stdio.h>

int main(void)
{
	int a = 0;
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			//�r�b�g�_���ρi�A���h�j���ӂƂ��P�Ȃ�1�ɂȂ�
			a = i & j;
			printf("%4d��ځF",i+1);
			printf("%4d\n", a);
		}
	}
	return 0;
}