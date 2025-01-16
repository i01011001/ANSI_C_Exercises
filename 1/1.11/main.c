/*
   How would you test the word count program? What kinds of input are most
   likely to uncover bugs if there are any?
   */
#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int input=0;
	int word_count=0;
	int is_word=0;

	while((input=getchar()) != EOF){
		if(input == ' ' || input == '\n' || input == '\t') 
		{
			if(is_word) {
				word_count++ ;
			}

			if(input == '\n') 
			{
				printf("word count: %d\n", word_count);
				word_count=0;
			}

			is_word=0;
		} 
		else
		{
			is_word=1;
		}
	}
}

/*
 Input with concurrent blank, newline and tabs
 */
