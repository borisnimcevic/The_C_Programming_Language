/*
   Made by borisnotes on Jun 24rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

   Exercise 1.8
   Write a program to coun blanks, tabs, and newlines.

   Comment: For this exercise I used a .txt file for pracitce. Chapter 1
   does not cover the ropic of opening, reading and closing the file. The code I am using is modified 
   code from the following link https://www.geeksforgeeks.org/c-program-print-contents-file/
   The text in dennis.txt are the fisrt two paragrapshs from Dennis Ritchie's wiki page.
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_pointer;
 	int char_read, space, tab, newline;
    space=0;
    tab=0;
    newline=0;

    // Open file
    file_pointer = fopen("dennis.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Cannot open file \n");
        return EXIT_FAILURE;
    }
 
    // Read contents from file
    while ((char_read=fgetc(file_pointer)) != EOF)
    {
        if(char_read==' '){
            ++space;
        }
        if (char_read=='\t'){
            ++tab;
        }
        if(char_read=='\n')
        {
        	++newline;
        }
    }
 
    fclose(file_pointer);

    printf("This document has %d spaces, %d tabs, and %d new lines.\n", space, tab, newline );

    return EXIT_SUCCESS;
}