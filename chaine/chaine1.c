#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isFloat(char*s)
{
		int i=0;
		if(s[i]=='_')i++;
		if(!(isdigit(s[i]))){return 0;}
		i++;
		while(isdigit(s[i])){i++;}
		if (s[i]=='\0')return 1;
		if (s[i]!='\0'){return 0;}
		i++;
		if(!isdigit(s[i]))return 0;
		while(isdigit(s[i]))i++;
		if (s[i]=='\0')return 1;
		return 0;
}
int main(int argc, char** argv)
{	
	int i,j;
	for(i=0;i<argc;i++)
		printf("%s\n",argv[i]);
	int taille;
	for(i=0;i<argc;i++)
	{
		taille=strlen(argv[i]);
		for(j=0;j<taille;j++)
		{
			printf("%c",argv[i][j]);	
		}
	}
double a,b;
b=0;
for (i=1;i<argc;i++)
	{
		a=atof(argv[i]);
		b=b+a;
	}
	printf("\n\n%f",b);

	return 0;
}	

