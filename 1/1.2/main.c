/*
   Experiment to find out what happens when prints's argument string contains
   \c, where c is some character not listed above.
   */
#include <stdio.h>

int main(){
	printf("Hello\c World!\n");
	return 0;
}

/*
   main.c: In function ‘main’:
   main.c:4:34: error: unknown escape sequence: '\c' [-Werror]
   4 |         printf("Hello\c World!\n");
   |                                  ^
cc1: all warnings being treated as errors
make: *** [Makefile:2: all] Error 1
*/
