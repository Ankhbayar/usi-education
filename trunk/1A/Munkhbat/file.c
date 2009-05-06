#include<stdio.h>
int main()
{
	int i,b;
	FILE *file;
	file = fopen("File.txt","rw");
	for (i=0; i<100; i++)
	{
		fprintf(file, "%d\n", i);
		fscanf(file,"%d",&b);
		printf("%d\n", b);
	}
	
	fclose(file);
	return 0;	
}
