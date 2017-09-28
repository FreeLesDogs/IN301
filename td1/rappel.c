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
int nb_premier(int n)
{
		int i;
		
		for(i-2;i<n;i++)
		{
				if(n%i !=0)return 0;
				
		}
		return 1;
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
int main()
{	//etoiles();
	//conversion(5);
	//multiEgypt(23,87);
	//limite(1);
	//nb_premier(5);
	nbAmi(6);
}	

