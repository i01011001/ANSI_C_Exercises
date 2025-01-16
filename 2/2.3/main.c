/*
Write a function htoi(s), which converts a string of hexadecimal digits 
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 
through 9, a through f, and A through F.  
   */

#include <stdio.h>
#include <math.h>

static int get_line(char* buffer, int len);
static int htoi(char* buffer);

int main(){
	char buffer[32];
	int decimal;
	while(1){
		get_line(buffer, 32);
		decimal = htoi(buffer);
		printf("decimal: %d\n", decimal);
	}
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

static int htoi(char* buffer){
	if(buffer[0]!='0' && (buffer[1]!='x' || buffer[1]!='X')) {
		printf("hex must start with 0x || 0X\n");
		return 0;
	}
	char temp_char={};
	int count=2;
	int temp_int=0;
	int out=0;
	int power=0;
	printf("string: %s\n", buffer);
	while(1){
		temp_char=buffer[count];
		if(temp_char>='0' && temp_char<='9'){
			temp_int = temp_char-'0';
		}else if(temp_char>='A' && temp_char<='F'){
			temp_int = 10+ (temp_char - 'A');
		}else if(temp_char>='a' && temp_char<='f'){
			temp_int = 10+ (temp_char - 'a');
		}else{
			if(temp_char=='\0'){
				// printf("decimal = %d\n",out);
				return out;
			}else{
				printf("hex value only!!!\n");
				return -1;
			}
		}
		out += temp_int*pow(16,power);
		power++;
		count++;
	}
}
