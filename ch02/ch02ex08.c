// ch02ex08.c

/* In C, one function can call another. Write a program that calls a function named one_three(). This function should display the word "one" on one line, call a second function named two(), & then display the word "three" on one line. The function two() should display the word "two" on one line. The main() function should display the phrase "starting now:" before calling one_three() & display "done!" after calling it. Thus, the output should look like the following.

starting now:
one
two
three
done! */

#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}