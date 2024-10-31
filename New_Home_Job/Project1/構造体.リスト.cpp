#include<stdio.h>

struct MH
{
	char name[50];
	int HP;
	MH* next;
};

int main(void)
{
	int i = 0;
	MH m0 = { "ラージャン",10000 };
	MH m1 = { "プケプケ",15000 };
	MH m2 = { "ジンオウガ",150000 };
	MH* pm;

	m0.next = &m1;
	m1.next = &m2;
	m2.next = NULL;



	for (pm = &m0; pm != NULL; pm = pm->next)
	{
		printf("monstres%dのメンバnameは%sでメンバHPは%dです。\n", i, pm->name, pm->HP);
		i++;
	}


	return 0;
}