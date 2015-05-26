// ch01ex01v2.c

/* You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The company is entering the European market & wants a program that converts inches to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it prompts the user to enter an inch value. Your assignment is to define the program objectives & to design the program (steps 1 & 2 of the programming process). 

Update(s): 
- Changed #define IN_TO_CM to a const double.
- Added function prototypes. 
- Broke the program down into functions. */

#include <stdio.h>

void getInch(void);
void convert(float i);
void putCent(float i, float c);

int main(void)
{
	getInch();
	getch();				// This is used to prevent the console window from closing.	
	return 0;
}

void getInch(void)
{
	float in;
	printf("Enter an inch value: ");
	while (scanf("%f", &in) == 1){
		convert(in);
	}
			
}

void convert(float i)
{
	const double IN_TO_CM = 2.54;	// 1 in. = 2.54 cm.	
	float cm;
	cm = i * IN_TO_CM;
	putCent(i, cm);
}

void putCent(float i, float c)
{
	printf("%.2f inch(es) equals %.2f centimeter(s).\n", i, c);
	printf("Enter another value or a non-numeral to exit.\n");
}
