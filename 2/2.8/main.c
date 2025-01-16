/*
   Write a function rightrot(x,n) that returns the value of the integer x rotated 
   to the right by n positions.
   */

#include <stdio.h>

static unsigned rightrot(unsigned x, int n);
static inline unsigned isolate(unsigned n);

int main(){ 
	printf("0x%x\n",rightrot(0x80, 9));
}


static unsigned rightrot(unsigned x, int n){
	unsigned y= x & ~((1U << (n+1U))-1);
	printf("y = 0x%x\n\n",y);
	for(int i=0 ; i <= n ; i++){
		printf("0x%x\n", isolate(i));
		y |= (((x & isolate(i))>>i) << (n-i));
	}
	return y;
}

static inline unsigned isolate(unsigned n) {
    return (1U << n);
}
