#include<stdio.h>
int main(){
	FILE *p;
	p = fopen("A.txt","wr");
	char mass[5];
	int i;
	while(1){
		for(i=0; i<5; i++);
		fprintf(p,"hi\n");
		fscanf(p,"%s",mass);
		printf("%d\n",i);
}

return 0;
}
