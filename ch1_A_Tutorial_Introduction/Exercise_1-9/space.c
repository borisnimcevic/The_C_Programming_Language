/*
   Made by borisnotes on Jun 24rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

   Exercise 1.9
   Write a program to copy its input to its output, replacing, each string of one or moreblanks by
   a single blank.

   Comment: For this exercise I used a .txt file for pracitce. Chapter 1
   does not cover the ropic of opening, reading and closing the file. The code I am using is modified 
   code from the following link https://www.geeksforgeeks.org/c-program-print-contents-file/
   The text in dennis.txt are the fisrt two paragrapshs from Dennis Ritchie's wiki page.

   I added random spaces in dennis_space.txt for thepurpose of this exercise.
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_pointer;
    int current_char, previous_char;
    current_char=0;
    previous_char=-1;

    // Open file
    file_pointer = fopen("dennis_space.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Cannot open file \n");
        return EXIT_FAILURE;
    }
    
    printf("This is the original text:\n\n");

    // Read contents from file
    while ((current_char=fgetc(file_pointer)) != EOF)
    {
        putchar(current_char);
    }
 
    fclose(file_pointer);
    current_char=0;

    printf("\n\nThis is the same txt with all the multiple blansk written as a single blank \n\n");

    //Opent he file second time
    file_pointer = fopen("dennis_space.txt", "r");

    // Read contents from file
    while ((current_char=fgetc(file_pointer)) != EOF)
    {
        if(current_char!=previous_char){
          putchar(current_char);
        }
        previous_char=current_char;
    }
 
    fclose(file_pointer);

    return EXIT_SUCCESS;
}