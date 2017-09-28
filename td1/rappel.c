#include <stdio.h>
/*#include <stlib.h>*/
void etoiles(int n)
{
	int i,j;
	for(i=0;i<n;i++)	
		{
			for(j=0;j<n-1-i;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}	
}
void conversion (int nb_sec)
{
	int s,m,h;
	s=nb_sec;
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("%d secondes= %d heures %d minutes %d secondes\n ",nb_sec,h,m,s);
}
int main()
{	//etoiles();
	conversion(5);
}	

