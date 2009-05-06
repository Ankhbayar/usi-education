#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	FILE *fp = NULL;
	char mass[100000];
	int i,a;
	while(1)
	{
		mass[i]='9';
		mass[i]='\t';
	
	fp=fopen("file", "w");
	fprintf(fp, "%d", 1); 
	fwrite(mass, sizeof(char), a, fp);
	fscanf(fp, "%s", mass );
	usleep(5);
	fclose(fp);
	}
	return 0;
}
