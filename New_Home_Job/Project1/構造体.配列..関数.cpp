//#include<stdio.h>
//
//struct Monster
//{
//	char name[50];
//	int HP;
//};
//
//void output(Monster* pmonsters);
//
//int main(void)
//{
//	Monster monsters[3] = { {"ラージャン",500000},{"プケプケ",100000}, {"ジンオウガ",800000}};
//	/*
//		上記配列の初期化の記述は以下の記述と同じことを示す。
//
//		monsters[0].name = " ラージャン " ;
//		monsters[0],HP = 500000 ;
//		monsters[1].name = " プケプケ " ;
//		monsters[1].HP = 100000 ;
//		monsters[2].name = " ジンオウガ " ;
//		monsters[2].HP = 800000 ;
//
//		
//	*/
//	
//	output(monsters);
//
//	return 0;
//
//}
//
//void output(Monster* pmonsters)
//{
//	
//	for (int i = 0; i < 3; i++)
//	{
//		printf("配列monsters[%d]のメンバnameは%sでメンバHPは%dです。\n", i, pmonsters[i].name, pmonsters[i].HP);
//	}
//	
//}