/*
Write an alternative version of squeeze(s1,s2) that deletes each character in 
s1 that matches any character in the string s2. 
   */

#include <stdio.h>

static int get_line(char* buffer, int len);
static void squeeze(char* s1, char* s2);

int main(){
	char s1[100]={};
	char s2[100]={};
	get_line(s1, 100);
	get_line(s2, 100);

	squeeze(s1, s2);
	printf("s1: %s\n", s1);
}

static int get_line(char* buffer, int max){
	char c=EOF;
	int len;
	for(len=0 ; (c=getchar())!=EOF && c != '\n' && len<max-1; len++ ){
		buffer[len] = c;
	}
	buffer[len] = '\0';
	return len;
}

static void squeeze(char* s1, char* s2){
	int len=0;
	while(s1[len] != '\0') len++;

	for(int i = len-1 ; s1[i]>=0 ; i--){
		for(int j=0 ; s1[j]!='\0' ; j++){
			if(s1[i] == s2[j]){
				int k=i;
				while(s1[k] != '\0'){
					s1[k] = s1[k+1];
					k++;
				}
			}
		}
	}
}
