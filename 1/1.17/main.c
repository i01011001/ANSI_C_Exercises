/*
   Write a program to print all input lines that are longer than 80 characters. 
   */

#include <stdio.h>

#define MAXLEN 1000
#define UPPER 80

static int gline(char* buffer, int maxlen);

int main(){
	char temp_buffer[MAXLEN]={0};
	int temp_len=EOF;
	while(temp_len > 0){
		temp_len = gline(temp_buffer, MAXLEN);
		fputs("\n.....................................\n", stdout);
		if(temp_len>UPPER){
			printf("string: %s", temp_buffer);
			printf("length: %d\n", temp_len);
			putchar('\n');
		}
	}
}

static int gline(char* buffer, int maxlen){
	char c;
	int len=0;
	int null_ended=0;

	while((c=getchar())!=EOF){
		buffer[len] = c;

		if(c=='\n'){
			break;
		} else if(c=='\0'){
			null_ended=1;
			break;
		}

		if(len==(maxlen-1)){
			break;
		}else if (len>=(maxlen-1)){
			return -1;
		}
		len++;
	}
	if(!null_ended) buffer[len+1] = '\0';
	return len;
}

