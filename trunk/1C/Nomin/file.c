#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
        FILE *infile;
        int i,a;
        a=100;
		infile=fopen("test.txt", "w");
        for(i=0;i<a;i++)
        {
                fprintf(infile, "%d\n", 1); 
        }     
        fclose(infile);
        return 0;
}

