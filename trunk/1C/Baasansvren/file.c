#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
	FILE *infile;
	char mass[1000000];
	int i,a;
	a=1000000;
	for(i=0;i<a;i++)
	{
		mass[i]='a';
		mass[i]='\n';
	}
	infile=fopen("test", "w");
	fwrite(mass, sizeof(char), a, infile);
	fscanf(infile, "%s", mass );
	fclose(infile);
	return 0;
}
