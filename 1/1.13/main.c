
/*
   Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
   */

#include <stdio.h>

#define IN 1
#define OUT 0

#define COLUMN 10

int main(){
	int input=0;
	int is_word=0;
	int word_length=0;

	while((input=getchar()) != EOF){
		if(input == ' ' || input == '\n' || input == '\t' ){
			for(int i=0; i<(COLUMN-word_length) ; i++) putchar(' ');
			for(int i=0; i<word_length ; i++){
				// putchar('##');
				fputs("####", stdout);
			}
			if(is_word){
				putchar('\n');
			}
			is_word=0;
			word_length=0;
		}else{
			putchar(input);
			word_length++;
			is_word=1;
		}
	}
}


