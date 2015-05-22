// ch05ex02.c

/* Write a program that asks for an integer & then prints all the integers from (& including) that value up to (& including) a value larger by 10. (That is, if the input is 5, the output runs from 5 to 15.) Be sure to seperate each output value by a space or tab or newline. */

#include <stdio.h>

int main(void)
{
	int integer;
	
	printf("Enter an integer value: ");
	scanf("%d", &integer);
	
	int limit = integer + 10;		// Attempted to use math in while() to no avail.
	
	while (integer <= limit) {		// Not incremented because current value must be printed.
		printf("%d\t", integer);
		++integer;					// Incremented here.
	}
	
	return 0;
}