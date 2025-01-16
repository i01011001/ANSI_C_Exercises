/*
   Write a program to print the corresponding Celsius to Fahrenheit table.
   */

#include <stdio.h>

int main(){
	float cel, feh;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	cel = lower;

	printf("%10s%10s\n","cel", "feh");
	while(cel <= upper){
		feh = ( (9/5.0) * cel ) + 32;
		printf("%10.2f%10.2f\n", cel, feh);		
		cel += step;
	}

	return 0;
}
