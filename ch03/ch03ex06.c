// ch03ex06.c

/* The mass of a single molecule of water is about 3.0x10e-23 grams. A quart of water is about 950 grams. Write a program that requests an amount of water, in quarts, & displays the number of water molecules in that amount. */

#include <stdio.h>

#define MOL_IN_G 3.0e-23
#define QT_IN_G 950

int main()
{
	float quarts;
	
	printf("Enter an amount of water in quarts: \n");
	scanf("%f", &quarts);
	printf("%.2f quart(s) of water contains %e water molecules.\n", quarts, quarts * QT_IN_G / 				MOL_IN_G);
	return 0;
}