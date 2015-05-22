// ch05ex08.c

/* Write a program that displays the results of applying the modulus operation. The user should first enter an integer to be used as the second operand, which will then remain unchanged. Then the user enters the numbers for which the modulus will be computed, terminating the process by entering 0 or less. A sample run should look like this:

This program computes moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182 */

#include <stdio.h>

int main(void)
{
	int fOp, sOp;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &sOp);
	printf("Now enter the first operand: ");
	scanf("%d", &fOp);
	printf("%d %% %d is %d\n", fOp, sOp, fOp % sOp);
	
	getch();	// This is used to prevent the console window from closing.
	return 0;
}