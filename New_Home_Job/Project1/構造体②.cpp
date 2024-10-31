//#include<stdio.h>
//
//
///*　typedefを使ったタグ名の略称づけ　*/
//typedef struct Monster
//{
//	char Name[100];
//	int HP;
//	int Power;
//	float Attribute;
//
//}MH;
//
//
//
//
//int main(void)
//{
//	/*　構造体の初期化の記述　*/
//	MH Rajang = { "ラージャン",100000,500,30.5 };
//	MH PukePuke = { "プケプケ",15000,50,10.2 };;
//	MH Zinogre = { "ジンオウガ",50000,540,30.8 };
//
//	printf("Name:%s\n", Rajang.Name);
//	printf("HP:%d\n", Rajang.HP);
//	printf("Power:%d\n", Rajang.Power);
//	printf("Attribute:%.1lf\n", Rajang.Attribute);
//	printf("\n");
//	printf("Name:%s\n", PukePuke.Name);
//	printf("HP:%d\n", PukePuke.HP);
//	printf("Power:%d\n", PukePuke.Power);
//	printf("Attribute:%.1lf\n", PukePuke.Attribute);
//	printf("\n");
//	printf("Name:%s\n", Zinogre.Name);
//	printf("HP:%d\n", Zinogre.HP);
//	printf("Power:%d\n", Zinogre.Power);
//	printf("Attribute:%.1lf\n", Zinogre.Attribute);
//	printf("\n");
//	/*　sizeof演算子を使った型の大きさを見る　*/
//	printf("Monster型のサイズ：%d\n", (int)sizeof(Monster));
//	printf("int型のサイズ：%d\n", (int)sizeof(int));
//	printf("char型のサイズ：%d\n", (int)sizeof(char));
//
//	return 0;
//	
//}
//
//
//
