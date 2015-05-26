// ch06ex08.c

/* Write a program that requests two floating-point numbers & prints the value of their difference divided by their product. Have the program loop through pairs of input values until the user enters non-numeric input. */

#include <stdio.h>

int main(void)
{
	double num1, num2, result;
	
	printf("Enter two floating-point numbers separated by a space (non-numeric to quit): ");
	
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		result = (num1 - num2) / (num1 * num2);
 		printf("(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n", num1, num2, num1, num2, result);
 		printf("Enter two floating-point numbers separated by a space (non-numeric to quit): ");
	}
	
	getch();
	return 0;
}