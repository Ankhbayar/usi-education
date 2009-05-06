#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
  FILE *fp;
  char array[1000000];
  int i,a,t=0;
       
        printf("oruulna uu  ");
        a=1000000;
        for(i=0;i<a;i++)
        {
       array[i]='1';
                t++;
        if(t==120)
        {
        array[i]='\n';
        t=0;
        }
        }
       
  fp=fopen("hello.txt", "w");

  fwrite(array, sizeof(char), a, fp);
  fscanf(fp, "%s", array );
  fprintf(stdout, "%s", array);
  fclose(fp);

  for(i=0; i<a; i++)
    printf("%c ", array[i]);

  return 0;
}


