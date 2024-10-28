#include<stdio.h>
#include<string.h>



struct Monster
{
	char Name[100];
	int HP;
	int Power;
	double Attribute;

};



int main(void)
{

	Monster Rajang;	
	strcpy_s(Rajang.Name,100,"ラージャン");
	Rajang.HP = 10000;
	Rajang.Power = 500;
	Rajang.Attribute = 30.5;

	Monster PukePuke;			
	strcpy_s(PukePuke.Name,100,"プケプケ");
	PukePuke.HP = 15000;
	PukePuke.Power = 50;
	PukePuke.Attribute = 10.22;

	Monster Zinogre = { 
		"ジンオウガ",100000,600,50.5 };

	printf("Name:%s\n", Rajang.Name);
	printf("HP:%d\n", Rajang.HP);
	printf("Power:%d\n", Rajang.Power);
	printf("Attribute:%.1lf\n", Rajang.Attribute);

	printf("Name:%s\n", PukePuke.Name);
	printf("HP:%d\n", PukePuke.HP);
	printf("Power:%d\n", PukePuke.Power);
	printf("Attribute:%.1lf\n", PukePuke.Attribute);

	printf("Name:%s\n", Zinogre.Name);
	printf("HP:%d\n", Zinogre.HP);
	printf("Power:%d\n", Zinogre.Power);
	printf("Attribute:%.1lf\n", Zinogre.Attribute);

	return 0;
}

