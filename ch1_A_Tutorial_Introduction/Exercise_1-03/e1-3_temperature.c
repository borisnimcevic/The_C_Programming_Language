/*
Made by borisnotes on Jun 19th, 2018
From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie
Exercise 1.3
*/

#include <stdio.h>

/*
Print Fahrenheit-Celsius table
for fahr= 0, 20, ..., 300; floating-point version
*/

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table*/
	upper = 300;  /* upper limit */
	step = 20; /* step size */

	printf("Fahrenheit: \t Celsius:\n");

	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("     %3.0f\t%6.1f\n", fahr, celsius ); //added '\t' for tab, so it can align with the headers
		fahr += step;
	}



	return 0;
}