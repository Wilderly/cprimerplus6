// ch04ex01.c

/* Write a program that asks for your first name, your last name, & then prints the names in the format last, first. */

#include <stdio.h>

int main(void)
{
	char firstname[40], lastname[40];
	
	printf("Enter your first name. ");
	scanf("%s", firstname);
	printf("Enter your last name. ");
	scanf("%s", lastname);
	printf("%s, %s\n", lastname, firstname);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}