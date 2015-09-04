// ch08ex03.c

/* Write a program that reads input as a stream of characters until encountering EOF. Have it report the number of uppercase letters, the number of lowercase letters, & the number of other characters in the input. You may assume that the numberic values for the lowercase letters are sequential & assume the same for uppercase. Or, more portably, you can use appropriate classification functions from the ctype.h library. */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char ch;
	unsigned long upper, lower, other = 0;
	
	printf("Enter character(s): ");
	
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			upper++;
		else if
			(islower(ch))
			lower++;
		else
			other++;
	}
	
	printf("upper: %ul, lower: %ul, other: %ul\n", upper, lower, other);
	
	getch();
	return 0;
}