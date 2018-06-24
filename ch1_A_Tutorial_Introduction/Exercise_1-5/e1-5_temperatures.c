/*
   Made by borisnotes on Jun 23rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

   Exercise 1.5
   Modify the temperature conversion program to print the table in reverse order, the is, from 300 degrees to 0.
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main (){
	printf("Fahrenheit: \t Celsius:\n");

	for(int fahr=UPPER; fahr>= LOWER; fahr-=STEP){
		printf("%3d \t\t %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
	}



	return 0;
}