/*
   Write a program to copy its input to its output, replacing each tab by \t, each
   backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
   unambiguous way.
   */
#include <stdio.h>

int main(){
	int input=0;

	while((input=getchar()) != EOF){
		if(input == '\t')
		{
			fputs("\\t", stdout);
		}
		else if(input == '\b' || input == 127) 
		{
			fputs("\\b", stdout);
		}
		else if(input == '\\') 
		{
			fputs("\\\\", stdout);
		}
		else
		{
			putchar(input);
		}
	}
}
