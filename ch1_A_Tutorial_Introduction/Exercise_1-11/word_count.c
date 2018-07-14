/*
   Made by borisnotes on July 13rd, 2018
   From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie

	Exercise 1.11

	How would you test the word count program? What kinds of inputs are most likely to uncover bugs if there are any?

	Answer: I tested empty documents or documents that are filled with just empty spaces, tabs or new lines.
	This program was able to handle these inputs, and gave the right answers.
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

    int read_char, nl, nw, nc, state;

    state=OUT;

    read_char = nl = nw = nc = 0;

    while((read_char=fgetc(file_pointer)) !=EOF){
        ++nc;
        if (read_char == '\n'){
            ++nl;
        }
        if (read_char == ' ' || read_char == '\n' || read_char == '\t'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }

    printf("Number of new lines = %d \nNumber of words = %d\nNumber of characters = %d\n", nl, nw, nc );

    return 0;
}