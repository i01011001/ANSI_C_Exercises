/*
   Modify the temperature conversion program to print the table in reverse order, 
   that is, from 300 degrees to 0.
   */
#include <stdio.h>

int main(){
	float cel, feh;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	cel = upper;

	printf("%10s%10s\n","cel", "feh");
	while(cel >= lower){
		feh = ( (9/5.0) * cel ) + 32;
		printf("%10.2f%10.2f\n", cel, feh);		
		cel -= step;
	}

	return 0;
}
