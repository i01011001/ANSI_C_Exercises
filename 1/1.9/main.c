/*
   Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
   */
#include <stdio.h>

int main(){
	int input=0;
	int previous=EOF;

	while((input=getchar()) != EOF){
		if(input == ' ' && previous == input){
			continue;
		}
		putchar(input);
		previous = input;
	}
}
