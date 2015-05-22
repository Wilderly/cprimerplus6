// ch03ex03.c

/* Write a program that sounds an alert & then prints the following text:

Startled by the sudden sound, Sally shouted,
"By the Great Pumpkin, what was that!" */

#include <stdio.h>

int main()
{
	printf("\aStartled by the sudden sound, Sally shouted, \n");
	printf("\"By the Great Pumpkin, what was that!\"\n");
	
	return 0;
}