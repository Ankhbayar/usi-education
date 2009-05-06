#include<stdio.h>
#include<time.h>
int i;
int main()
{
	for(i=0; i<9999999; i++)
	{
		printf("%d",i);
		usleep(1000);
	}
	return 0;
}
