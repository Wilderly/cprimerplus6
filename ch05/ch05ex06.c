// ch05ex06.c

/* Now modify the program of Programming Exercise 5 so that it computes the sum of the squares of the integers. (If you prefer, how much money you receive if you get $1 the first day, $4 the second day, $9 the third day, & so on. This looks like a much better deal!) C doesn't have a squaring function, but you can use the fact that the square of n is n * n. */

#include <stdio.h>

int main(void)
{
	int count = 0, limit = 0, square = 0, sum = 0;
	
	printf("Enter a number of days: ");
	scanf("%d", &limit);
	
	while (count++ < limit) {
		sum = sum + count;
		square = sum * sum;
		printf("sum = %d, squared = %d\n", sum, square);
	}
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}