// ch03ex01.c

/* Find out what your system does with integer overflow, floating-point overflow, & floating-point underflow by using the experimental approach; that's, write programs having these problems. (You can check the discussion in Chapter 4 of limits.h & float.h to get guidance on the largest & smallest values. */

#include <stdio.h>
#include <limits.h>	// Provides detailed information on size limits of integer types.
#include <float.h>	// Provides detailed information on size limits of floating types.

int main(void)
{
	int tooSmallInt = -2147483649, tooLargeInt = 3000000000;
	float tooSmallFlt = -1.0, tooLargeFlt = 4.0;
	
	printf("The minimum integer value on this system is %d.\n", INT_MIN);	
	// The compiler warns that you're converting a long to an int.
	printf("An example of integer underflow: %d.\n", tooSmallInt);
	
	printf("The maximum integer value on this system is %d.\n", INT_MAX);
	printf("An example of integer overflow: %d.\n", tooLargeInt);	
	
	printf("The minimum float value on this system is %f.\n", FLT_MIN);
	printf("An example of float underflow: %f.\n", tooSmallFlt);
	
	printf("The maximum float value on this system is %e.\n", FLT_MAX);
	printf("An example of float overflow: %e.\n", tooLargeFlt);	
	
	return 0;
}