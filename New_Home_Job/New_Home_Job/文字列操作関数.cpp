#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100] = "FINAL";
	char str2[100] = "FANTASY";
	char str3[100];
	char str4[100] = "FINAL FANTASY REBIRTH";

	/*�@str1�Estr2�̕������𐔂���istrlen�j*/
	printf("str1�̕�����F%s\n",str1);
	printf("str1�̕������F%d\n", (int)strlen(str1));

	/*str2��2�Ԗڂ܂ł̕������𐔂���istrnlen�j�@*/
	printf("str2�̕�����F%s\n", str2);
	printf("str2�̂Q�Ԗڂ܂ł̕������F%d\n", (int)strnlen(str2,3));
	printf("\n");

	/*�@str2�̕������str1�ɃR�s�[����istrcpy_s�j */
	strcpy_s(str1, 100, str2);
	printf("str2���R�s�[����str1�̕�����F%s\n", str1);
	printf("str1�̕������F%d\n", (int)strlen(str1));

	/*�@str2��5�Ԗڂ܂ł̕������str1�ɃR�s�[����istrncpy_s�j */
	strncpy_s(str1, 100, str2,5);
	str1[5] = '\0';
	printf("str2��4�Ԗڂ܂ł��R�s�[����str1�̕�����F%s\n", str1);
	printf("str1�̕������F%d\n", (int)strlen(str1));
	printf("\n");
	strcpy_s(str1, 100, "FINAL");

	/*�@str2�̕������str1�̖�������ǉ�����istrcat_s�j�@*/
	strcat_s(str1, " ");
	strcat_s(str1, str2);
	strcat_s(str1, " ");
	strcat_s(str1, "REMAKE");
	printf("REMAKE�̕������ǉ�����str1�̕�����F%s\n", str1);
	strcpy_s(str3,100,str1);	

	/*�@777��1�Ԗڂ̕������str1[14]����ǉ�����(strncpy_s�j�@*/
	strncpy_s(str1+14,76,"777",1);
	printf("777��1�Ԗڂ̕������str1[14]����ǉ�����str1�̕�����F%s\n", str1);
	printf("\n");

	/*�@str3��str4�̕�������r����istrcmp�j*/
	printf("str3�̕�����F%s\n", str3);
	printf("str4�̕�����F%s\n", str4);
	if (strcmp(str3, str4) == 0)
	{
		printf("str3��str4�͓������B\n");
	}
	if (strcmp(str3, str4) < 0)
	{
		printf("str3��str4��菬�����B\n");
	}
	if(strcmp(str3,str4)>0)
	{
		printf("str3��str4���傫���B\n");
	}
	printf("\n");

	/*str1��str2��2�Ԗڂ̕�������r����istrncmp�j*/
	printf("str1�̕�����F%s\n", str1);
	printf("str2�̕�����F%s\n",str2);
	if(strncmp(str1,str2,2)==0)
	{
		printf("str1��str2�͓������B\n");
	}
	if (strncmp(str1, str2,2) < 0)
	{
		printf("str1��str2��菬�����B\n");
	}
	if (strncmp(str1, str2,2) > 0)
	{
		printf("str1��str2���傫���B\n");
	}
	printf("\n");


	/*�@�����wA�x��str1�̍ŏ����猟������istrchr�j�@*/
	printf("str1:%s\n", str1);
	printf("str1��[A]���ŏ�����T���ďo�Ă���z��̈ʒu��%d�ł��B\n",(int)(strchr(str1, 'A')-str1));
	printf("\n");

	/*�@�����wA�x��str1�̌�납�猟������(strrchr�j�@*/
	printf("str1:%s\n",str1);
	printf("str1��[A]����납��T���ďo�Ă���z��̈ʒu��%d�ł��B\n", (int)(strrchr(str1, 'A') - str1));
	printf("\n");

	/*�@str2�̕������str1�̍ŏ����猟������istrstr�j�@*/
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	printf("str1��str2�̕�������ŏ�����T���ďo�Ă���ŏ��̔z��̈ʒu��%d�ł��B\n", (int)(strstr(str1, str2) - str1));

	
	return 0;
}