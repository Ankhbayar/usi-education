#include <stdio.h>
#include<stdlib.h>

int main () {
	FILE *new_file;
  	new_file = fopen ("new" , "w");
	
	time_t now;
  	now = time(NULL);
  	printf(ctime((&now)));
	
	int a = 0;
        
        for(a = 0; a <= 700;a++) {
  		fprintf( new_file ,"%d " ,a );
  		usleep( 4285 );
  	}
  
          now = time(NULL);
 	 printf(ctime((&now)));
 	 
  	fclose ( new_file );  
  return 0;
}
