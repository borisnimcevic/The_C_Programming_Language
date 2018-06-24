/*
   Made by borisnotes on Jun 24rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

   Exercise 1.6
   Verify that the expression getchar() != EOF is 0 or 1.
 */


#include <stdlib.h>
#include <stdio.h>



int main(){

	int c;

	while(c= (getchar() !=EOF)){
		printf(" getchar() != EOF is %d\n",c);
	}


	return EXIT_SUCCESS;

}