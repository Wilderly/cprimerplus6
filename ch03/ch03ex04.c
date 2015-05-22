// ch03ex04.c

/* Write a program that reads in a floating-point number & prints it first in decimal-point notation, then in exponential notation, & then, if your system supports it, p notation. Have the output use the following format (the actual number of digits displayed for the exponent depends on the system):

Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6 */

#include <stdio.h>

int main(void)
{
	float number;
	printf("Enter a floating-point value: \n");
	scanf("%f", &number);
	printf("fixed-point notation: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("p notation: %a\n", number);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}