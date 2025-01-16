
/*
   Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.  
   */

#include <stdio.h>

#define MAXLEN 1000

int gline(char* buffer, int len);

int main(){
	char buffer[MAXLEN]={0};
	int len=0;

	while( (len = gline(buffer, MAXLEN)) > 0){
		if(buffer[len-1] == ' ' || buffer[len-1] == '\t'){
			printf("\033[33mtrailing spaces detected, removing them now\n\033[0m");
			while (buffer[len-1] == ' ' || buffer[len-1] == '\t') {
				buffer[len-1]='\0';
				len -= 1;
			};
		};
		printf("\033[32mlen: %3d -> \"%s\"\n\033[0m", len, buffer);
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


