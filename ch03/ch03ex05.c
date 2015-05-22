// ch03ex05.c

/* There are approximately 3.156 x 10^7 seconds in a year. Write a program that requests your age in years & then displays the equivalent number of seconds. */

#include <stdio.h>

int main(void)
{
	float age;
	float secondsYear = 3.156 * 10e7; 
	
	printf("Enter your age in years: \n");
	scanf("%f", &age);
	printf("You are %.2f seconds old.\n", age * secondsYear);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}