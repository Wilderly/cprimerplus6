// ch05ex09.c

/* Write a program that requests the user to enter a Fahrenheit temperature. The program should read the temperature as a type double number & pass it as an argument to a user-supplied function called Temperatures(). This function should calculate the Celsius equivalent & the Kelvin equivalent & display all three temperatures with a precision of two places to the right of the decimal. It should identify each value with the temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:

Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)

The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute zero, the lower limit to possible temperatures. Here is the formula for converting Celsius to Kelvin:

Kelvin = Celsius + 273.16

The Temperatures() function should use const to create symbolic representations of the three constants that appear in the conversions. The main() function should use a loop to allow the user to enter temperatures repeatedly, stopping when a q or other nonnumeric value is entered. Use the fact that scanf() returns the number of items read, so it will return 1 if it reads a number, but it won't return 1 if the user enters q. The == operator tests for equality, so you can use it to compare the return value of scanf() with 1. */

#include <stdio.h>

// A function prototype that indicates a double is passed but nothing is returned.
void temperatures(double fahr);

int main(void)
{
	double fahr;
	
	printf("Enter a temperature in Fahrenheit: ");
	// The program loops while() the value pointed to is a number.
	while (scanf("%lf", &fahr) == 1) { 
		temperatures(fahr);
		printf("Enter another temperature in Fahrenheit or a non-integer value to exit.\n");
	}
	
	return 0;
}

void temperatures(double n)
{
	const double cels = 5.0 / 9.0 * (n - 32.0);
	const double fahr = n;
	const double kelv = cels + 273.16;
	
	printf("%.2f Fahrenheit is %.2f Celsius & %.2f Kelvin.\n", fahr, cels, kelv);
}