/*
   Modify the temperature conversion program to print a heading above the table.
   */
#include <stdio.h>

int main(){
	float cel, feh;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	feh = lower;

	printf("%10s%10s\n","feh", "cel" );
	while(feh <= upper){
		cel = (5.0/9) * (feh - 32);
		printf("%10.2f%10.2f\n", feh, cel);		
		feh += step;
	}

	return 0;
}
