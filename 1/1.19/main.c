
/*
Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. 
   */

#include <stdio.h>

#define MAXLEN 1000

#define _GREEN_ "\033[32m"
#define _YELLOW_ "\033[33m"
#define _RESET_ "\033[0m"

int gline(char* buffer, int len);

int main(){
	char buffer[MAXLEN]={0};
	int len=0;

	while( (len = gline(buffer, MAXLEN)) > 0){
		if(buffer[len-1] == ' ' || buffer[len-1] == '\t'){
			printf("%sspaces detected, removing them now\n%s",_YELLOW_,_RESET_);
			while (buffer[len-1] == ' ' || buffer[len-1] == '\t') {
				buffer[len-1]='\0';
				len -= 1;
			};
		};
		printf("%sApplying reverse\n%s",_YELLOW_, _RESET_);
		printf("%s", _GREEN_);
		for(int i=(len-1) ; i >= 0 ; i--){
			putchar(buffer[i]);
		}
		printf("%s",_RESET_);
		putchar('\n');
	}
}

int gline(char* buffer, int len){
	char c=EOF;
	for(len=0 ; (c=getchar())!=EOF && len < (MAXLEN-1) && c != '\n'; len++ ){
		buffer[len] = c;
	}
	buffer[len+1] = '\0';
	return len;
}


