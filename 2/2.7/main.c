/*
Write a function invert(x,p,n) that returns x with the n bits that begin at 
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.  
   */

#include <stdio.h>

#define div(p, n) (((1U << (p+1))-1) ^ ((1U << (p+1-n))-1))

static unsigned invert(int x, int p, int n);

int main(){ 
	printf("invert: 0X%x\n", invert(0x7f, 5, 3));
}

static unsigned invert(int x, int p, int n){
	return (~x | div(p,n)) ^ (x | ~div(p,n));
}

