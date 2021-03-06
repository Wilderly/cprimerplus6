// ch04ex02.c

/* Write a program that requests your first name & does the following with it:

a. Prints it enclosed in double quotation marks.
b. Prints it in a field 20 characters wide, with the whole field in quotes & the name at the right end of the field.
c. Prints it at the left end of a field of 20 characters wide, with the whole field enclosed in quotes.
d. Prints it in a field 3 characters wider than the name. */

#include <stdio.h>

int main(void)
{
	char name[40];
	
	printf("Enter your first name. ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%s\"\n", name);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}