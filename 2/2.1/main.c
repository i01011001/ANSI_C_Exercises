/*
   Write a program to determine the ranges of char, short, int, and long 
   variables, both signed and unsigned, by printing appropriate values from standard headers 
   and by direct computation. Harder if you compute them: determine the ranges of the various 
   floating-point types. 
   */

#include <stdio.h>
#include <limits.h>
#include <float.h>



int main(){
	fputs("----------------------------------------SIGNED------------------------------------------\n",stderr);
	printf("%10s%24s%24s\n","TYPE", "MIN", "MAX");
	printf("%10s%24hhd%24hhd\n", "char", CHAR_MIN, CHAR_MAX);
	printf("%10s%24hd%24hd\n", "short", SHRT_MIN, SHRT_MAX);
	printf("%10s%24d%24d\n", "int", INT_MIN, INT_MAX);
	printf("%10s%24ld%24ld\n", "long", LONG_MIN, LONG_MAX);

	fputs("\n--------------------------------------UNSIGNED------------------------------------------\n",stderr);
	printf("%10s%24s%24s\n","TYPE", "MIN", "MAX");
	printf("%10s%24hhu%24hhu\n", "char", UCHAR_MAX+1, UCHAR_MAX);
	printf("%10s%24hu%24hu\n", "short", USHRT_MAX+1, USHRT_MAX);
	printf("%10s%24u%24u\n", "int", UINT_MAX+1, UINT_MAX);
	printf("%10s%24lu%24lu\n", "long", ULONG_MAX+1, ULONG_MAX);

	fputs("\n--------------------------------------FLOAT------------------------------------------\n",stderr);
	printf("%10s%50f%50f\n", "float", FLT_TRUE_MIN, FLT_TRUE_MIN);
	// printf("%10s%50lf%50lf\n", "double", DBL_MIN, DBL_MAX);
	// printf("%10s%50Lf%50Lf\n", "long double", LDBL_MIN, LDBL_MAX);

	printf("size of float: %ld\n",sizeof(float));
	printf("size of double: %ld\n",sizeof(double));
	printf("size of long double: %ld\n",sizeof(long double));

	printf("0x59: \x59\n");
	int a;
	printf("a: %d", a);

	// printf("")
}
