// ch04ex03.c

/* Write a program that reads in a floating-point number & prints it first in decimal-point notation & then in exponential notation. Have the output use the following formats (the number of digits shown in the exponent may be different for your system):

a. The input is 21.3 or 2.1e+001.
b. The input is +21.290 or 2.129E+001. */

#include <stdio.h>

int main(void)
{
	float number;
	
	printf("Enter a number. \n");
	scanf("%f", &number);
	printf("%.2f %.6e\n", number, number);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}