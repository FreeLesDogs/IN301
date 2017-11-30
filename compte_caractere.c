#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
int compt(FILE *f)
{
	int cpt=0;
	while(fgetc(f)!=EOF){cpt++;}
	return cpt;
	}
int compt2(FILE*f)
{
int cpt=0;
char s[256];
while (fgets(s,256,f)!=NULL)
{cpt=cpt+strlen(s);}
return cpt;	
}
int main(int argc,char**argv) {
	FILE *f;
	if(argc!=2)
	{
		fprintf(stderr,"Format attendu: %s ",argv[0]);
	}
	f=fopen(argv[1],"r");
	if(f==NULL)exit (EXIT_FAILURE);
	printf("%d \n",compt(f));
	fclose(f);
	return 0;
}
