// ch03ex02.c

/* Write a program that asks you to enter an ASCII code value, such as 66, & then prints the character having the ASCII code. */

#include <stdio.h>

int main()
{
	int asciiCode;
	
	printf("Enter an ASCII code value.\n");
	scanf("%d", &asciiCode);
	printf("The character for that ASCII code value is %c.\n", asciiCode);
	
	return 0;
}