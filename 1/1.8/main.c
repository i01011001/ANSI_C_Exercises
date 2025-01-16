/*
   Write a program to count blanks, tabs, and newlines.
   */
#include <stdio.h>

int main(){
	int input;
	int blanks, tabs, newlines =0;
	// int newlines = 0;

	while((input=getchar()) != EOF){
		if(input == '\n'){
			newlines ++;
			printf("newlines count: %d\n", newlines);
		}
		if(input == ' '){
			blanks ++;
			printf("blanks count: %d\n", blanks);
		}
		if(input == '\t'){
			tabs ++;
			printf("tabs count: %d\n", tabs);
		}
	}
}
