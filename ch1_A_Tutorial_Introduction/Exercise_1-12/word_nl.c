/*
   Made by borisnotes on July 13rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

	Exercise 1.12

	Write a program that prints its input word per line.
*/	

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main(){

    FILE *file_pointer;

    // Open file
    file_pointer = fopen("dennis.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Cannot open file \n");
        return EXIT_FAILURE;
    }

    int read_char = 0;
    int state = OUT;

    while((read_char=fgetc(file_pointer)) !=EOF){
       	if (read_char == ' ' || read_char == '\n' || read_char == '\t'){
       		if(state == IN){
            	printf("\n");
            	state = OUT;
            }
        }
        else{
        	putchar(read_char);
        	state = IN;
        }
    }
    return 0;
}