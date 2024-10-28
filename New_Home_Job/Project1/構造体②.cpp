#include<stdio.h>
#include<string.h>



typedef struct Monster
{
	char Name[100];
	int HP;
	int Power;
	float Attribute;

}MH;


MH Rajang;
MH PukePuke;
MH Zinogre = { "ジンオウガ",50000 };


int main(void)
{

	strcpy_s(Rajang.Name, 100, "ラージャン");
	Rajang.HP = 10000;
	Rajang.Power = 500;
	Rajang.Attribute = 30.5;

	
	strcpy_s(PukePuke.Name, 100, "プケプケ");
	PukePuke.HP = 15000;
	PukePuke.Power = 50;
	PukePuke.Attribute = 10.2;

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

	typedef  long  float num;
	typedef unsigned int Power;

	num Pi = 3.141523;
	Power num1 = 500;
	Power num2 = 50000;


	return 0;
}

