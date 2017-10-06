#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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

int nbr_prem(int n)
     {
		 int i;
		 
		 
		 for(i=2; i <= n-1;i++)
		    {
				if(n%i == 0)
				   {
				     printf("%d n'est pas premier \n",n);
				     return 0; 
				     
				    }  
				break;
		     }	
		   printf("%d est un nombre premier\n",n); 
		   
		   return 1;  	
		   
	 }
	 
	 int som_div(int a )
    {
		int i, j = 0;
		for(i=1; i <= a-1;i++)
		      {
				if(a%i == 0)
				   {
				     j += i;
				    }        
		       }
		  return j;     
	}
void nbr_amis(int n, int m)
    {
		int a,b;
		
		a = nbr_prem(n);
		
		if(a)
		  {
			  printf("la somme des diviseurs de %d est %d\n\n",n,a);  
		   }
		else
		   {
			  a = som_div(n);
		 printf("la somme des diviseurs de %d est %d\n\n",n,a);
		   }
		 b = nbr_prem(m);
		
		if(b)
		  {
			  printf("la somme des diviseurs de %d est %d \n\n",m,b);  
		   }
		else
		   {
			  
		      b = som_div(m);
		     printf("la somme des diviseurs de %d est %d \n\n",m,b);   
		      } 
		       
		 if((a == m)&&(b == n)) 
		    printf("%d et %d sont amis\n\n",n,m);
		    
		 else
		     printf("%d et %d ne sont pas amis\n\n",n,m);             
	
	}
void syra(int n)
    {
		while(n>1)
		   {
			   if(n%2 == 0)
			      n = n/2;
			    
			   else
			      {n = (3*n)+1;}
			      
			      printf("%d \n",n);
			         
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
printf("%d\n",f);
return f;
}
double cal_suit(double n)
   {
	   int i =1;
	   if(n == 1 )
	   {					
			printf("%f \n",n);
			return sqrt(n);
		}
	    else
	    {
			n = sqrt(i +sqrt(n));
		    printf("%f\n",n);
			i++;
		}
		return n ;	
	} 
int main()
{	//etoiles();
	//conversion(5);
	//multiEgypt(23,87);
	//limite(1);
	//nb_premier(23);
	//nbr_amis(220,284);
	//syra(7);
	//factorielle(5);
	//ascii();
}	

