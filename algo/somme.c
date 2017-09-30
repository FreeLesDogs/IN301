#include <stdio.h>
#include <stdlib.h>
 
int sommeTableau(int tableau[], int fin,int debut)
{
    int i=0 , somme=0;
    for (i=debut ; i<fin ; i++)
    {
    somme=somme+tableau[i];
    }
    return somme;
}
int max(int T[],int n){ 
	int i;int m;m=T[0];
    for (i=0; i<n ; i++)
    {	
		if(T[i+1]>=T[i])
		m=T[i+1];
    }
    return m;}
int main()
{
    int S;
    int tableau[7] = {1,2,3,4,4,6,5};
    //S=sommeTableau(tableau,4,1);
	S=max(tableau,7);
    printf("max:%d\n",S);
    return 0;
}
 
 

