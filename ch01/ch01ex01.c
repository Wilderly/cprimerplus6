// ch01ex01.c

/* You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The company is entering the European market & wants a program that converts inches to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it prompts the user to enter an inch value. Your assignment is to define the program objectives & to design the program (steps 1 & 2 of the programming process). */

#include <stdio.h>

#define IN_IN_CM 2.54;	// 1 in. = 2.54 cm. 

int main(void)
{
	float inches, centimeters;
	
	printf("Enter an inch value.");
	scanf("%f", &inches);
	centimeters = inches * IN_IN_CM;	
	printf("%.2f inch(es) equals %.2f centimeter(s).\n", inches, centimeters);

	getch();				// This is used to prevent the console window from closing.	
	return 0;
}