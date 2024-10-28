#include<stdio.h>
#include<string.h>



struct Monster
{
	char Name[100];
	int HP;
	int Power;
	float Attribute;

};


Monster Rajang;	//グローバル変数

int main(void)
{
	
	strcpy_s(Rajang.Name,100,"ラージャン");
	Rajang.HP = 10000;
	Rajang.Power = 500;
	Rajang.Attribute = 30.5;

	Monster PukePuke;			//ローカル変数
	strcpy_s(PukePuke.Name,100,"プケプケ");
	PukePuke.HP = 15000;
	PukePuke.Power = 50;
	PukePuke.Attribute = 10.2;

	printf("Name:%s\n", Rajang.Name);
	printf("HP:%d\n", Rajang.HP);
	printf("Power:%d\n", Rajang.Power);
	printf("Attribute:%.1lf\n", Rajang.Attribute);

	return 0;
}

