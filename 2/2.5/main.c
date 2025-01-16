/*
Write the function any(s1,s2), which returns the first location in a string s1 
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. 
   */

#include <stdio.h>

static int get_line(char* buffer, int len);
// static void norep(char* string);
static int any(char* s1, char* s2);

int main(){
	char s1[100]={};
	char s2[100]={};
	int rep_index=0;

	while(1){
		get_line(s1, 100);
		get_line(s2, 100);
		// printf("before: %s\n", s1);
		// norep(s1);
		printf("after: %s\n", s1);
		rep_index = any(s1,s2);
		printf("\'%c\' occurs at %d index of string \"%s\"\n", s1[rep_index], any(s1, s2), s1);
		fputs("...................\n", stdout);
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

// static void norep(char* string){
// 	for (int i=0 ; string[i]!='\0' ; i++){			// anchor
// 		for(int j=i+1 ; string[j]!='\0' ; j++){		// checker
// 			if(string[i] != string[j]){
// 				continue;
// 			}
// 			for(int k=j ; string[k]!='\0' ; k++){	// shifter
// 				string[k] = string[k+1];
// 			}
// 		}
// 	}
// }

static int any(char *s1, char *s2){
	for(int i=0 ; s1[i]!='\0' ; i++){
		for(int j=0 ; s2[j]!='\0' ; j++){
			if(s1[i] == s2[j]){
				return i;
			}
		}
	}
	return -1;
}
