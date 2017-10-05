#include <stdio.h>
//#include <stlib.h>
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
void multiEgypt(int x,int y)
{
		int z=0;
		printf("%d X %d \n",x,y);
		while(x>=1)
		{
			if(x%2==0){x=x/2;y=2*y;}
			else{x--;z+=y;}
			printf("= %d X %d +%d\n",x,y,z);
		}
		printf("= %d\n",z);
}
void limite(int n)
{
		double s=0; double eps=0.01;
		while(1>eps*n*n)
			{
					s+=1.0/(n*n);
					n++;
			}
			printf("%f \n",s);
}
void nb_premier(int n)
{
		int i;
		int a=0;
		
		for(i=2;i<n;i++)
		{
				if(n%i ==0)a=1;
				 
				
				
		}
				if(!a)printf("%d est premier \n",n);
				else printf("%d n'est pas premier \n",n);
}
int sommeDiv(int n)
{
	int s=1;int i;
	for(i=2;i<n;i++)
		{
				if(n%i==0) s+=i;
		}return s;
}
void nbAmi(int n)
	{
		int a,b;
		for(a=1;a<=n;a++)
		{
				
				
						if(sommeDiv(a)==b && sommeDiv(b)==a)
						printf("%d %d \n",a,sommeDiv(a));
						if((b=sommeDiv(a))>a &&sommeDiv(b)==a);
		}
	}
	void ascii()
     {
		 int i;
		 
		 for(i = 0; i<255; i++)
		    {
				printf("%c \n",i);
		    }
     }	
int factorielle (int n)
{
	int f;
	if (n <= 1)
	f = 1;
	else
	f = n * factorielle(n-1);
	
	printf("%d",n);
	return f;
}
void suit_Syr(int T[],int taille)
    {
		printf("Entrez un entier \n ");
		
		scanf("%d",T);
		
		int i;
		
		for(i = 0; i<taille-1;i++)
		   {
			   if(T[i]%2 == 0)
			      T[i+1] = T[i]/2;
			    
			   else
			      T[i+1] = (3*T[i])+1;
			         
			 }
			      
		for(i = 0; i<taille-1;i++)
		   {
			   printf("T[%d] = %d \n",i,*(T+i));
			         
			 }	     
		   
		
    }
int main()
{	//etoiles();
	//conversion(5);
	//multiEgypt(23,87);
	//limite(1);
	//nb_premier(2);
	//nbAmi(6);
}	

