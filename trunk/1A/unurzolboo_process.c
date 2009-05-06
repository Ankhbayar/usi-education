#include<stdio.h>
int main(){
	FILE *p;
	p = fopen("A.txt","wr");
	char mass[11];
	while(1){
		fprintf(p,"hello \n");
		fscanf(p,"%s",mass);
		printf("%s\n",mass);
}

return 0;
}
