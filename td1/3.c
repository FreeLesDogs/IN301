#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
struct TABLEAU
	{
		int taille;
		int tab[100];
	};
typedef struct TABLEAU TABLEAU;
int alea(int n)
{
	int s;
	s=rand()%n;
	return s;
	
}
TABLEAU init_tab()
{
		int i;
		TABLEAU var;
		var.taille=10;
		for(i=0;i<10;i++)
		{
		var.tab[i]=	alea(20);
		printf("[%d]\n",var.tab[i]);
		
		}
		return var;
}

void produit(TABLEAU var)
{	int i;
	for(i=0;i<10;i++)
		{
		var.tab[i]=	alea(20);
		printf("[%d]\n",var.tab[i]);
		
		}
}
int main()
{	srand(time(NULL));
	
	TABLEAU var;
	init_tab(var);
}
