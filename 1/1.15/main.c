/*
Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
   */
#include <stdio.h>

#define UPPER 300
#define LOWER 0

float f2c(float fahr){
	return 5*(fahr-32)/9;
}

int main(){
	printf("%10s%10s\n", "fahr", "cel");
	for (float i=LOWER ; i<UPPER ; i+=10){
		printf("%10.2f%10.2f\n",i, f2c(i));
	}
	return 0;
}

