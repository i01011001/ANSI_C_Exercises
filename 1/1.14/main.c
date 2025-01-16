
/*
   Write a program to print a histogram of the frequencies of different characters in its input.
   */

#include <stdio.h>

#define IN 1
#define OUT 0

#define COLUMN 10

int main(){
	int input=0;
	// int is_word=0;
	// int word_length=0;
	int alpha[26]={0};

	while((input=getchar()) != EOF){
		if(input>='a' || input<='z'){
			alpha[input-'a']++;
		}
		if(input == '\n'){
			for(int i=0 ; i<('z'-'a'+1) ; i++){
				printf("%c:%2d ", i+'a', alpha[i]);
				for(int j=0 ; j<alpha[i] ; j++){
					fputs("####", stdout);
				}
				putchar('\n');
			}
		}
	}
}


