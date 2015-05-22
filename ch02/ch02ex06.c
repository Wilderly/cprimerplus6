// ch02ex06.c

/* Write a program that creates an integer variable called toes. Have the program set toes to 10. Also have the program calculate what twice toes is & what toes squared is. The program should print all three values, identifying them. */

#include <stdio.h>

int main(void)
{
	int toes = 10;
	
	printf("%d toes multiplied by 2 is %d toes.\n", toes, toes * 2);
	printf("%d toes squared is %d toes.\n", toes, toes * toes);
	
	return 0;
}