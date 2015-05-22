// ch04ex08.c

/* Write a program that asks the user to enter the number of miles traveled & the number of gallons of gasoline consumed. It should then calculate & display the miles-per-gallon value, showing one place to the right of the decimal. Next, using the fact that one gallon is about 3.785 liters & one mile is about 1.609 kilometers, it should convert the mile-per-gallon value to a liters-per-100-km value, the usual European way of expressing fuel consumption, & display the result, showing one place to the right of the decimal. Note that the U.S. scheme measures the distance traveled per amount of fuel (higher is better), whereas the European scheme measures the amount of fuel per distance (lower is better). Use symbolic constants (using const or #define) for the two conversion factors. */

#include <stdio.h>

int main(void)
{
	const float KM_PER_MI = 235.214; // Interwebz said 1 MPG = 235.214 L/100KM.
	float gal, mi;
	
	printf("Enter the number of miles traveled. ");
	scanf("%f", &mi);
	printf("Enter the number of gallons of gasoline consumed. ");
	scanf("%f", &gal);
	printf("That's %.1f miles per gallon (MPG), dawg!\n", mi / gal);
	printf("...which is %.1f liters-per-100-km.\n", (KM_PER_MI) / (mi / gal));
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}