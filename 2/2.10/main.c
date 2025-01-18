/*
   Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.  
   */

#include <stdio.h>

void lower(char* buffer, int length);

int main(){ 
	char buffer[] = "ThE ENd";
	printf("before: %s\n", buffer);
	lower(buffer, sizeof(buffer)/sizeof(buffer[0]));
	printf("after: %s\n", buffer);
}

void lower(char* buffer, int length){
	char temp={};
	for(int i=0 ; i<length && buffer[i]!='\0' ; i++){
		temp = buffer[i];
		buffer[i] = temp >= 'A' && temp <='Z' ? temp-'A'+'a' : temp;
	}
}
