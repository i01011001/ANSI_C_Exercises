
/*
   Write a program that prints its input one word per line.
   */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int input=0;
	int is_word=0;

	while((input=getchar()) != EOF){
		if(input == ' ' || input == '\n' || input == '\t' ){
			if(is_word){
				putchar('\n');
			}
			is_word=0;
		}else{
			putchar(input);
			is_word=1;
		}
	}
}


