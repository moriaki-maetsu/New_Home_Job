#include<stdio.h>



int main(void)
{

	/*�y�|�C���^��錾����z
	�ϐ�a�̃A�h���X���i�[����|�C���^�ϐ�pa��錾���ĕϐ�a�̃A�h���X���i�[���Ă��������B
																						*/

	int a = 0;
	int* pa = &a;
	
	/*�y�A�h���X���Z�q�E�֐ߎQ�Ɖ��Z�q�̖��z
	�@�ϐ�a�̃A�h���X���o�͂���B
	�A�|�C���^pa�Ɋi�[����Ă���A�h���X���o�͂���B
	�B�|�C���^pa�Ɋi�[����Ă���A�h���X��̒��g�i�l�j���o�͂���B
	�C�|�C���^pa�𗘗p���Ċi�[����Ă���A�h���X��̒��g�i�l�j��10�ɏ���������B
																						*/
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);
	printf("�|�C���^pa�̃A�h���X��%p�ł��B\n", pa);
	printf("�|�C���^pa�̒l��%d�ł��B\n", *pa);
	printf("�|�C���^���g���ĕϐ�a�̒l��10�ɕύX���܂����B\n");
	
	*pa = 10;
	
	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("\n");

	int num[5] = { 10,20,30,40,50 };
	int* pnum = num;

	/*�y�z��ƃ|�C���^�̖��z
	�@�z��num�̃A�h���X���o�͂���B�i�z�񖼂𗘗p���邱�Ɓj
	�A�|�C���^pnum�̃A�h���X���o�͂���B
	�B�z��num�̂O�Ԗڂ̒l���o�͂���B
	�C�z��num�̒l���o�͂���B�i�z�񖼂𗘗p���邱�Ɓj
	�D�|�C���^pnum�Ɋi�[����Ă���A�h���X��̒��g���o�͂���B
																						*/
	printf("�z��num�̃A�h���X��%p�ł��B\n", num);
	printf("�|�C���^pnum�̃A�h���X��%p�ł��B\n", pnum);
	printf("�z��num[0]�̒l��%d�ł��B\n", num[0]);
	printf("�z��num�̒l��%d�ł��B\n", *num);
	printf("�|�C���^�ϐ�pnum�̒l��%d�ł��B\n", *pnum);
	printf("\n");

	/*�y�|�C���^���Z�̖��z
	�@�z��num�̐擪�v�f����P��̃A�h���X���o�͂���B�i�|�C���^���Z���s�����Ɓj
	�A�z��num�̐擪�v�f����P��̗v�f�̒��g���o�͂���B�i�|�C���^���Z���s�����Ɓj
	�B�|�C���^pnum���C���N�������g����B
	�C�|�C���^pnum�Ɋi�[����Ă���A�h���X���o�͂���B
	�D�|�C���^pnum�Ɋi�[����Ă���A�h���X��̒��g���o�͂���B
	
																						*/
	printf("num+1������̃A�h���X��%p�ł��B\n", num + 1);
	printf("num+1������̒l��%d�ł��B\n", *(num + 1));
	printf("\n");

	
	printf("�|�C���^�ϐ�pnum���C���N�������g���܂����B\n");
	pnum++;
	
	printf("�|�C���^�ϐ�pnum�̃A�h���X��%p�ł��B\n", pnum);
	printf("�|�C���^�ϐ�pnum�̒l��%d�ł��B\n", *pnum);

	return 0;
}