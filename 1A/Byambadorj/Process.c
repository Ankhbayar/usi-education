#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main () {
  FILE *file;
  int i=0, k=0;
  time_t now;
  now = time(NULL);
  printf(ctime((&now)));
  file = fopen ("my", "w");
  for(i=0; i<10000000; i++) {
  	k++;
  	fprintf(file,"%d","ok");
  	if(k==100) {
  		k=0;
  		usleep(73);
  		fprintf(file,"\n");
  	}
  }
  now = time(NULL);
  printf(ctime((&now)));
  fclose (file);  
  return 0;
}
