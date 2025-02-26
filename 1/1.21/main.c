/*
   Write a program entab that replaces strings of blanks by the minimum 
   number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. 
   When either a tab or a single blank would suffice to reach a tab stop, which should be given 
   preference?  
   */

#include <stdio.h>
#include <string.h>

#define _GREEN_ "\033[32m"
#define _YELLOW_ "\033[33m"
#define _RESET_ "\033[0m"

#define TAB_SPACE 4
#define MAXLEN 1000

static void copy_string( char* destination, char* source, int len );
static int get_line(char* buffer, int len);
static void remove_trailing_space(char* buffer, int len);
static void entab(char* buffer, int len, int tab_space);
static void print_array(char* buffer);

int main(){
	char buffer[MAXLEN]={0};
	int len=0;

	while( (len = get_line(buffer, MAXLEN)) > 0){
		remove_trailing_space(buffer, len);

		// print_array(buffer);

		entab(buffer, len, TAB_SPACE);

		print_array(buffer);
	}
}

static void print_array(char* buffer){
	int count = 0;
	putchar('\n');
	while(buffer[count]!='\0') {
		if(buffer[count] != '\t') {
			printf("%2d: %c\n",count, buffer[count]);
		}else{
			printf("%s", _YELLOW_);
			printf("%d: %s\n",count, "\\t");
			printf("%s", _RESET_);
		}
		count++;
	}
}

static void copy_string( char* destination, char* source, int len ){
	int index = 0;
	while(source[index]!='\0' || index < len){
		destination[index] = source[index];
		index++;
	}
}

static int get_line(char* buffer, int len){
	char c=EOF;
	for(len=0 ; (c=getchar())!=EOF && len < (MAXLEN-1) && c != '\n'; len++ ){
		buffer[len] = c;
	}
	buffer[len+1] = '\0';
	return len;
}

static void remove_trailing_space(char* buffer, int len){
	if(buffer[len-1] == ' ' || buffer[len-1] == '\t'){
		printf("%strailing spaces detected, removing them now\n%s",_YELLOW_, _RESET_);
		while (buffer[len-1] == ' ' || buffer[len-1] == '\t') {
			buffer[len-1]='\0';
			len -= 1;
		};
	};
}

static int get_possible_entabs_count(char* buffer, int len, int tab_space){
	int entab_count = 0;
	int adj_space_streak= 0;
	for(int i=len ; i >=tab_space-1 ; i--){
		if( buffer[i]== ' ' ){
			adj_space_streak++;
			if(adj_space_streak == tab_space){
				entab_count ++;
				adj_space_streak= 0;
			}
		}else{
				adj_space_streak= 0;
		}
	}
	return entab_count;
}

static void entab(char* buffer, int len, int tab_space){
	int possible_entab_count = 0;
	char out[MAXLEN] = {0}; 
	// int len_final = len - entab_count*(tab_space-1);
	// int x= len_final;
	
	possible_entab_count = get_possible_entabs_count(buffer, len, tab_space);

	printf("entab_count: %d\n", possible_entab_count);

	copy_string(buffer, out, strlen(out));
}
