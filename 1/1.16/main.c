/*
   Revise the main routine of the longest-line program so it will correctly print the length of arbitary lon ginput lines, and as much as possible of the text.
   */

#include <stdio.h>

#define MAXLEN 14

static int gline(char* buffer, int maxlen);
static int cstring(char* destination, char* source, int maxlen);

int main(){
	char buffer[MAXLEN]={0};
	char temp_buffer[MAXLEN]={0};
	int len=0;
	int temp_len=EOF;
	while(temp_len >0){
		temp_len = gline(temp_buffer, MAXLEN);
		if(temp_len > len){
			len = temp_len;
			cstring(buffer, temp_buffer, MAXLEN);
		}
	}
	printf("Longest string: %s\n", buffer);
	printf("length: %d\n", len);
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

static int cstring(char* destination, char* source, int maxlen){
	int len=0;
	int null_ended = 0;

	for(len=0; len<(maxlen-1) ; len++){
		destination[len] = source[len];

		if(destination[len]=='\n') {
			break;
		} else if(destination[len]=='\0') { 
			null_ended=1;
			break;
		}
	}

	if(!null_ended) destination[len+1] = '\0';

	return 0;
}
