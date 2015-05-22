// ch05ex03.c

/* Write a program that asks the user to enter the number of days & then converts that value to weeks & days. For example, it would convert 18 days to 2 weeks, 4 days. Display the results in the following format:

18 days are 2 weeks, 4 days.

Use a while loop to allow the user to repeatedly enter day values; terminate the loop when the user enters a nonpositive value, such as 0 or -20. */

#include <stdio.h>

int main(void)
{
	const int DAYS_IN_WEEK = 7;
	int days, weeks, numDays;
	
	printf("Enter a number of days to be converted to weeks & days: ");
	scanf("%d", &numDays);
	
	while (numDays > 0) {
		weeks = numDays / DAYS_IN_WEEK;
		days = numDays % DAYS_IN_WEEK;		// % gives the remainder.
		printf("%d days are %d weeks, %d days.\n", numDays, weeks, days);
		
		// Without the following, the program would loop endlessly.
		printf("Enter another value or 0 to quit.\n");
		scanf("%d", &numDays);
	}
	
	return 0;
}