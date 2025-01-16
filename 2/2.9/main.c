/*
   Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.  
   */

#include <stdio.h>
#include <limits.h>

int bitcount(unsigned x);
int fasterBitcount(unsigned x);

int main(){ 
	unsigned long i= 100*1000*1000;
	// unsigned long j= LONG_MAX;
	while(i!=0){
			// fasterBitcount(i);
			bitcount(i);
		i--;
	}
}

int bitcount(unsigned x) 
{ 
	int b; 
	for (b = 0; x != 0; x >>= 1) 
		if (x & 01) 
			b++; 
	return b; 
} 

int fasterBitcount(unsigned x)
{
	int b;
	for (b = 0 ; x != 0 ; b++){
		x&=x-1;
	}
	return b;
}
