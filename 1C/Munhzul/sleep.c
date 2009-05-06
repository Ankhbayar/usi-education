#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main(void)
{
  FILE *fp=NULL;
  int t=0;
  
	while (5) 
	{
		t++;
		printf("zula %d\n",  t);
		//fprintf(fp, "%d", 1); 
		usleep(250000);//1c=1000,000
	}
	//fclose(fp); 
	return 0;
}
