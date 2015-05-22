// ch02ex03.c

/* Write a program that converts your age in years to days & displays both values. At this point, don't worry about fractional years & leap years. */

#include <stdio.h>

int main(void)
{
	int ageDays, ageYears = 18;
	
	ageDays = ageYears * 365;
	
	printf("You are %d years old, which is %d days old.\n", ageYears, ageDays);
	getch();	// This is used to prevent the console window from closing.
	return 0;
}