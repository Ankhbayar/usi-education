#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
  FILE *fp;
  char mass[1000000];
  int i,a,t=0;
	
	printf("uguulber oruul : ");
	a=1000000;
	for(i=0;i<a;i++)
	{
	mass[i]='a';
		t++;
	if(t==120)
	{
	mass[i]='\n';
	t=0;
	}
	}
	
  fp=fopen("test", "w");

  fwrite(mass, sizeof(char), a, fp);
  fscanf(fp, "%s", mass );
  fprintf(stdout, "%s", mass);
  fclose(fp);

  for(i=0; i<a; i++)
    printf("%c ", mass[i]);

  return 0;
}
