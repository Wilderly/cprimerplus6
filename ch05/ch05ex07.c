// ch05ex07.c

/* Write a program that requests a type double number & prints the value of the number cubed. Use a function of your own design to cube the value & print it. The main() program should pass the entered value to this function. */

#include <stdio.h>

// A function prototype that indicates a double is passed but nothing is returned.
void cube(double n);

int main(void)
{
	double dNumber;
	printf("Enter a type double number to be cubed: ");
	scanf("%lf", &dNumber);	// Use %lf because scanf() needs to know size of data pointed at.
	
	cube(dNumber);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}

void cube(double n)
{
	while (n > 0) {
		printf("%.2f cubed equals %.2f.\n", n, n * n * n);
		
		// Without the following, the program would loop endlessly.
		printf("Enter another value or 0 to quit.\n");
		scanf("%lf", &n);
	}
}