/*
   Verify that the expression getchar() != EOF is 0 or 1
   */
#include <stdio.h>

int main(){
	while(1){
		printf("%d\n", (getchar() !=EOF));
	}
}
