/*
Write a function rightrot(x,n) that returns the value of the integer x rotated 
to the right by n positions.  
   */

#include <stdio.h>

static unsigned setbits(int x, int p, int n, int y);

int main(){ 
	printf("unsigned: 0X%x\n", setbits(0xddde, 7, 4, 0xfffa));
}

static unsigned setbits(int x, int p, int n, int y){
	return (y >> (p + 1 - n) & ((1U << n) - 1)) | (x & ~((1U << n) - 1)) ;
}

