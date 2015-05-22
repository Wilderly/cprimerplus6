// ch04ex07.c

/* Write a program that sets a type double variable to 1.0/3.0 & a type float variable to 1.0/3.0. Display each result 3 times--once showing four digits to the right of the decimal, once showing 12 digits to the right of the decimal, & once showing 16 digits to the right of the decimal. Also have the program include float.h & display the values of FLT_DIG & DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values? */

#include <stdio.h>
#include <float.h>

int main(void)
{
	const double DVAR = 1.0 / 3.0;
	const float FVAR = 1.0 / 3.0;
	
	printf("%.4f\n", DVAR);
	printf("%.12f\n", DVAR);
	printf("%.16f\n", DVAR);
	
	printf("%.4f\n", FVAR);
	printf("%.12f\n", FVAR);
	printf("%.16f\n", FVAR);
	
	printf("%d is the minimum number of significant decimal digits for a double.\n", DBL_DIG);
	printf("%d is the minimum number of significant decimal digits for a float.\n", FLT_DIG);

	return 0;
}