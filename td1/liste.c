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
	


int estvide(Liste l)
{
	return l== NULL;
}

void affiche(Liste l)
{
	while(!estvide(l))
	{
		printf("%d\n",(*l).val);
		//l->val = suiv;
		l=(*l).suiv;
		
	}
}

void afficheR(Liste l)
{
	if(!estvide(l))
	{
		printf("%d\n",l->val);
		affiche(l->suiv);
	}
}

	
Liste creerElement(int n)
{
	Liste l;
	l = (Liste)malloc(sizeof(struct element));
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
	if(!estvide(l))
	{
		
		libere(l->suiv);
		free(l);
	}
	return NULL;
}


Liste inserFin(Liste l,int n)
{
	Liste ltmp,l2;
	ltmp=creerElement(n);
	if(estvide(l))
	{
		return ltmp;
	}
	l2=l;
	while(!estvide(l->suiv))
    {
		l=l->suiv;
	}
	l->suiv=ltmp;
	return l2;
}

Liste insereFinR(Liste l, int n)
{
	Liste tmp;
	if(estvide(l))
	{
		tmp = creerElement(n);
		return tmp;
	}
	l->suiv=insereFinR(l->suiv,n);
	return l;
}

Liste insertrie(Liste l, int n)
{
	Liste ltmp= creerElement(n);
	if(estvide(l) || n < l->val)
	{
		return insereDeb(l,n);
	}
	while(!estvide(l->suiv)&&l->val < n)
	{
		l = l->suiv;
	}
	ltmp = creerElement(n);
	ltmp = l->suiv;
	l->suiv=ltmp;
	return l;
}	

Liste insereTrieR(Liste l, int n)
     {
		 if(estvide(l) || n < l->val)
		    return insereDeb(l,n);
		    
		 l->suiv = insereTrieR(l->suiv,n);
		 
		 return l;
	 }
	 
int testTrie(Liste l)
   {
	   while((!estvide(l)) && (!estvide(l->suiv)))
	        {
				if(l->val > l->suiv->val)
				    return 0;
				else
				    l = l->suiv;
			}
			
			return 1;
	}			        
	
int testTrieR(Liste l)
    {
		if(estvide(l) || estvide(l->suiv))
		    return 1;
		if(l->val > l->suiv->val)
		    return 0;
		else (testTrieR(l->suiv));
    }		            		 	    
int taille(Liste l)
   {
	   int cmp = 0;
	   
	   while(!estvide(l))
	       {
			   cmp++;
			   l = l->suiv;
			   }
			printf("nb d'éléments :%d \n",cmp);
			return cmp;
	 }
	 
int tailleR(Liste l)
    {
		if(estvide(l))
		   return 0;
		 else
		    return 1 + tailleR(l->suiv);
     }		      	    		   
	   		
int recherche(Liste l,int n)
{
	while(!estvide(l))
	{
		if(l->val==n)
		return 1;
		l=l->suiv;
	}
	return 0;
}
int rechercheR(Liste l,int n)
{
		if (estvide(l))
		return 0;
		if (l->val==n)
		return 1;
		return rechercheR(l->suiv,n);
}
Liste supprimer(Liste l,int n)
{
		Liste lcour,lprec;
		if(estvide(l))return l;
		if(l->val==n)
		{
				lcour=l->suiv;
				free(l);
				return lcour;
		}
		lprec=l;
		lcour=l->suiv;
		while(!estvide(lcour))
		{
				if(lcour->val==n)
				{
				lprec->suiv=lcour->suiv;
				free(lcour);
				return l;
				}
				lprec=lcour;
				lcour=lcour->suiv;
		}
		return l;
}
Liste supprimerR(Liste l,int n)
{
		Liste lcour;
		if(estvide(l))
		return l;
		if(l->val==n)
		{
				lcour=l->suiv;
				free(l);
				return lcour;
		}
		l->suiv=supprimerR(l->suiv,n);
		return l;
}
Liste concatener(Liste l1,Liste l2)
{
		Liste l=l1;
		if(estvide(l1))return l2;
		
		while(!estvide(l1->suiv))
		{
			l1=l1->suiv;
		}
			l1->suiv=l2;
				
			return l;
		
}
Liste fusion(Liste l1,Liste l2)
{
		if(estvide(l1))return l2;
		if(estvide(l2))return l1;
		if(l1->val<l2->val)
		{
				l1->suiv=fusion(l1->suiv,l2)
				return l1;
		}
		else
		{l2->suiv=fusion(l1,l2->suiv);
			return l2;}
}
int main()
{
	
    Liste l= creerListe();
    Liste m= creerListe();
    l=insereDeb(l,3);
    l=insereDeb(l,5);
    l=insereDeb(l,2);
    l=insereDeb(l,6);
    m=insereDeb(m,6);
    m=insereDeb(m,8);
    m=insereDeb(m,4);
    m=insereDeb(m,1);
    //afficheR(l);
    //tailleR(l);
    //l=supprimer(l,5);
    l=concatener(l,m);
    afficheR(l);
    return 0;
}
