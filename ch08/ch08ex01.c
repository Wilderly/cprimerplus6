// ch08ex01.c

// Devise a program that counts the number of characters in its input up to the end of file.

#include <stdio.h>

int main(void)
{
	char ch;
	int ct = 0;
	
	while ((ch = getchar()) != EOF)
	{
		ct++;
	}
	
	printf("%d", ct);
	
	getch();
	return 0;
}