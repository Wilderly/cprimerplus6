// ch05ex01.c

/* Write a program that converts time in minutes to time in hours & minutes. Use #define or const to create a symbolic constant for 60. Use a while loop to allow the user to enter values repeatedly & terminate the loop if a value for the time of 0 or less is entered. */

#include <stdio.h>

int main(void)
{
	const int M_PER_H = 60;		// 60 minutes in an hour.
	int hours, minutes, time;
	
	printf("Enter a time in minutes: ");
	scanf("%d", &time);
	
	while (time > 0) {
		hours = time / M_PER_H;	
		minutes = time % M_PER_H;	// % gives you the remainder.
		printf("%d equals %d hours & %d minutes.\n", time, hours, minutes);
		
		// Without the following, the program would loop endlessly.
		printf("Enter another value or 0 to quit.\n");
		scanf("%d", &time);
	}
	
	return 0;
}