/*
Made by borisnotes on Jun 18th, 2018
From book "The C Programming Language" by Brain W. Kerninghan and Dennis M. Ritchie
Exercise 1.2
*/

#include <stdio.h>

int main(){
	printf("Test: \c\n");
	printf("If we try to write '\\c', like in the previous line, we will get a warring message:\"unknown escape sequence:'\\c'.");
	printf("However, the program will still compile, and '\\c' will be replaced with character 'c' \n");
	return 0;
}