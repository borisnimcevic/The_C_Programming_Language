/*
   Made by borisnotes on Jun 23rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

   Exercise 1.4
   Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>


int main(){

        float fahr, celsius;
        int lower, upper, step;

        upper= 200;
        lower = -30;
        step = 10;

        printf("Celsius: \t Fahrenheit:\n");

        celsius=lower;
        while(celsius<=upper){
          fahr=((celsius*9.0)/5.0) +32.0;
          printf("%6.1f\t\t\t%3.0f\n", celsius, fahr );//added '\t' for tab, so it can align with the headers
          celsius+=step;
        }


        return 0;
}
