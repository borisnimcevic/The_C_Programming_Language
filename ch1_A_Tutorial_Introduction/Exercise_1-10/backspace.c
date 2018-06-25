/*
   Made by borisnotes on Jun 24rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

	Exercise 1.10

	Write a progarm to cpy its input ot its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.
	This makes tabs and backspaces visible in an unambiguous way.

	Comment: For this exercise I used a .txt file for pracitce. Chapter 1
	does not cover the ropic of opening, reading and closing the file. The code I am using is modified code from the following link https://www.geeksforgeeks.org/c-program-print-contents-file/

	The text in dennis.txt are the fisrt two paragrapshs from Dennis Ritchie's wiki page.
*/	

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_pointer;
    int read_char =0;

    // Open file
    file_pointer = fopen("dennis.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Cannot open file \n");
        return EXIT_FAILURE;
    }
    

    // Read contents from file
    while ((read_char=fgetc(file_pointer)) != EOF)
    {
    	if(read_char=='\t'){
    		printf("\\t");
    	}
    	else if(read_char=='\b'){
    		printf("\\b");
    	}
    	else if (read_char=='\\'){
    		printf("\\\\");
    	}
    	else{
    		 putchar(read_char);
    	}
       
    }
 

    fclose(file_pointer);

    return EXIT_SUCCESS;
}