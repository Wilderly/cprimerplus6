// ch04ex04.c

/* Write a program that requests your height in inches & your name, & then displays the information in the following form:

Dabney, you are 6.208 feet tall. */

#include <stdio.h>

int main(void)
{
	float height;
	char name[40];
	const float IN_IN_FT = 12.0;	// # of inches in foot
	
	printf("Enter your height in inches. ");
	scanf("%f", &height);
	printf("Enter your name. ");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall.\n", name, height / IN_IN_FT);
	
	return 0;
}