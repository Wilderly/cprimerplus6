// ch03ex07.c

/* There are 2.54 centimeters to the inch. Write a program that asks you to enter your height in inches & then displays your height in centimeters. Or, if you prefer, ask for the height in centimeters & convert that to inches. */

#include <stdio.h>

#define IN_IN_CM 2.54

int main()
{
	float heightInches;
	
	printf("Enter your height in inches: \n");
	scanf("%f", &heightInches);
	printf("%.2f inch(es) is equal to %.2f centimeter(s).\n", heightInches, heightInches * 					IN_IN_CM);
	
	return 0;
}