// ch03ex08.c

/* In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an ounce is 2 tablespoons, & a tablespoon is 3 teaspoons. Write a program that requests a volume in cups & that displays the equivalent volumes in pints, ounces, tablespoons, & teaspoons. Why does floating-point type make more sense for this application than an integer type? */

#include <stdio.h>

#define PT_IN_CUP 2
#define CUP_IN_OZ 8
#define OZ_IN_TBSP 2
#define TBSP_IN_TSP 3

int main()
{
	float volCups;
	
	printf("Enter a volume in cups: ");
	scanf("%f", &volCups);
	printf("%.2f pint(s)\n", volCups / PT_IN_CUP);
	printf("%.2f ounce(s)\n", volCups * CUP_IN_OZ);
	printf("%.2f tablespoon(s)\n", (volCups * CUP_IN_OZ) * OZ_IN_TBSP);
	printf("%.2f teaspoon(s)\n", (volCups * CUP_IN_OZ) * (OZ_IN_TBSP * TBSP_IN_TSP));
	
	return 0;
}