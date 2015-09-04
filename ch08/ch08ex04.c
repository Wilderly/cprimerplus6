// ch08ex04.c

/* Write a program that reads input as a stream of characters until encountering EOF. Have it report the average number of letters per word. Don't count whitespace as being letters in a word. Actually, punctuation shouldn't be counted either, but don't worry about that now. (If you do want to worry about it, consider using the ispunct() function from ctype.h family). */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char ch, pch;
	float average, letters, words = 0;
	
	printf("Enter character(s): ");
	
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			letters++;
			pch = ch;
		} else if (isalpha(ch) && isspace(ch)) {
			words++;
		}
	}
	
	average = letters / words;
	
	printf(" The average number of letters per word is %.2f", average);
	
	getch();
	return 0;
}