#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
struct element 
{
	int val;
	struct element* suiv;
};
typedef struct element* Liste;

Liste creerListe()
{
	return NULL;
}
int EstVide(Liste l)
{
	return l== NULL;
}
void affiche(Liste l)
{
	while(!EstVide(l))
	{
		printf("%d\n",l->val);
		//l->val  = l->suiv;
		l=l->suiv;
		
	}
}

void afficheR(Liste l)
{
	if(!EstVide(l))
	{
		printf("%d\n",l->val=l);
		affiche(l->suiv=l);
	}
}


/*Liste creerElement(int n)
{
	struct element elt;
	elt.val = n;
	elt.suiv = NULL;
	return &elt;
}*/
Liste creerElement2(int n)
{
	Liste l;
	l= malloc(sizeof(struct element));
	if(l==NULL)
	{ printf("allocation memoire echoue\n");
		exit(EXIT_FAILURE);
	}
	l->val = n;
	l->suiv = NULL;
return l;
}

Liste insereDeb(Liste l, int n)
{
	Liste lres = creerElement(n);
	lres->suiv=l;
	
	return lres;
}

Liste libere(Liste l)
{
	if(!EstVide(l))
	{
		suiv = l;
		libere(l);
		free(l);
	}
	return NULL;
}
		


Liste inserFin(Liste l,int n)
{
	Liste ltmp,l2;
	ltmp=creerElement(n);
	if(EstVide(l))
	{
		return ltmp;
	}
	l2=l;
	while(!EstVide(l->suiv))
    {
		l=l->suiv;
	}
	l->suiv=ltmp;
	return l2;
}

Liste inserFinR(liste l, int n)
{
	Liste tmp;
	if(EstVide(l))
	{
		tmp= creerElement();
		return ltmp;
	}
	l->suiv=insereFinR(l->suiv,n);
	return l;
}

Liste insertrie(Liste l, int n)
{
	Liste ltmp= creerElement(n);
	if(EstVide(l) || n<l->val)
	{
		return insereDeb(l,n);
	}
	while(!EstVide(l->suiv)&&l->val<n)
	{
		l = l->suiv;
	}
	ltmp = creerElement(n);
	ltmp = l->suiv;
	l->suiv=ltmp;
	return l2;
Liste insertrieRec(Liste l,int n)
{
		if (EstVide(l)||n<l->val)
		{
				return insereDeb(l,n);
		}
		l->suiv=insertrieRec(l->suiv,n);
		return l;
}		
int estTrie(Liste l)
{
		while(!EstVide(l)&&!EstVide(l->suiv))
		{
				if(l->val>l->suiv->val)
				return 0;
				else l=l->suiv;
		}
		return 1;
}
int estTrieRec(Liste l)
{
		if(EstVide(l)||EstVide(l->suiv))
		return 1;
		if(l->val>l->suiv->val)
		return 0;
		else estTrieRec(l->suiv);
}
int taille(Liste l)
{
		int cmp=0;
		while(!EstVide(l))
		{
				cmp++;
				l=l->suiv;
		}
		return cmp;
}
int main()
{
    Liste l = creerListe();
    l= creerElement2(3);
    printf("%d\n", val->l);	
  
    l=insereDeb(l,3);
    l=insereDeb(l,5);
    l=insereDeb(l,2);
    l=insereDeb(l,6);
    affiche(l);
    l=libere(l);



  
}
