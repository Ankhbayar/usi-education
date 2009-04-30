#include<stdio.h>
#include<stdlib.h>
typedef struct List {
	int val;
	struct List *next;
}list;
list *temp=NULL;
int main() {
	while(1) {
		list *curr = (list*)malloc(sizeof(list));
		curr-> val = 9000;
		temp = curr;
		temp = temp-> next;
	}
	return 1;
}
