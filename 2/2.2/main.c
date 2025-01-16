/*
    (i < lim-1 && (c=getchar()) != '\n' && c != EOF) 
	Write a loop equivalent to the for loop above without using && or ||.
   */

#include <stdio.h>

int main(){
	int lim = 23;
	char c = ' ';
	for(int i=0 ; i < lim-1 ; i++){
		if((c=getchar()) == '\n') break;
		if( c == EOF) break;
		putchar(c);
		putchar('\n');
	}
}
