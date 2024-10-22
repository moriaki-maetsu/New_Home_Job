#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100] = "FINAL";
	char str2[100] = "FANTASY";
	char str3[100];
	char str4[100] = "FINAL FANTASY REBIRTH";

	/*　str1・str2の文字数を数える（strlen）*/
	printf("str1の文字列：%s\n",str1);
	printf("str1の文字数：%d\n", (int)strlen(str1));

	/*str2の2番目までの文字数を数える（strnlen）　*/
	printf("str2の文字列：%s\n", str2);
	printf("str2の２番目までの文字数：%d\n", (int)strnlen(str2,3));
	printf("\n");

	/*　str2の文字列をstr1にコピーする（strcpy_s） */
	strcpy_s(str1, 100, str2);
	printf("str2をコピーしたstr1の文字列：%s\n", str1);
	printf("str1の文字数：%d\n", (int)strlen(str1));

	/*　str2の5番目までの文字列をstr1にコピーする（strncpy_s） */
	strncpy_s(str1, 100, str2,5);
	str1[5] = '\0';
	printf("str2の4番目までをコピーしたstr1の文字列：%s\n", str1);
	printf("str1の文字数：%d\n", (int)strlen(str1));
	printf("\n");
	strcpy_s(str1, 100, "FINAL");

	/*　str2の文字列をstr1の末尾から追加する（strcat_s）　*/
	strcat_s(str1, " ");
	strcat_s(str1, str2);
	strcat_s(str1, " ");
	strcat_s(str1, "REMAKE");
	printf("REMAKEの文字列を追加したstr1の文字列：%s\n", str1);
	strcpy_s(str3,100,str1);	

	/*　777の1番目の文字列をstr1[14]から追加する(strncpy_s）　*/
	strncpy_s(str1+14,76,"777",1);
	printf("777の1番目の文字列をstr1[14]から追加したstr1の文字列：%s\n", str1);
	printf("\n");

	/*　str3とstr4の文字列を比較する（strcmp）*/
	printf("str3の文字列：%s\n", str3);
	printf("str4の文字列：%s\n", str4);
	if (strcmp(str3, str4) == 0)
	{
		printf("str3とstr4は等しい。\n");
	}
	if (strcmp(str3, str4) < 0)
	{
		printf("str3はstr4より小さい。\n");
	}
	if(strcmp(str3,str4)>0)
	{
		printf("str3はstr4より大きい。\n");
	}
	printf("\n");

	/*str1とstr2の2番目の文字列を比較する（strncmp）*/
	printf("str1の文字列：%s\n", str1);
	printf("str2の文字列：%s\n",str2);
	if(strncmp(str1,str2,2)==0)
	{
		printf("str1とstr2は等しい。\n");
	}
	if (strncmp(str1, str2,2) < 0)
	{
		printf("str1はstr2より小さい。\n");
	}
	if (strncmp(str1, str2,2) > 0)
	{
		printf("str1はstr2より大きい。\n");
	}
	printf("\n");


	/*　文字『A』をstr1の最初から検索する（strchr）　*/
	printf("str1:%s\n", str1);
	printf("str1で[A]を最初から探して出てくる配列の位置は%dです。\n",(int)(strchr(str1, 'A')-str1));
	printf("\n");

	/*　文字『A』をstr1の後ろから検索する(strrchr）　*/
	printf("str1:%s\n",str1);
	printf("str1で[A]を後ろから探して出てくる配列の位置は%dです。\n", (int)(strrchr(str1, 'A') - str1));
	printf("\n");

	/*　str2の文字列をstr1の最初から検索する（strstr）　*/
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	printf("str1でstr2の文字列を最初から探して出てくる最初の配列の位置は%dです。\n", (int)(strstr(str1, str2) - str1));

	
	return 0;
}