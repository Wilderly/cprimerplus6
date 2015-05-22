// ch06ex02.c

/* Use nested loops to produce the following pattern:

	$
	$$
	$$$
	$$$$
	$$$$$ */
	
#include <stdio.h>
	
int main(void)
{
	const int ROWS = 5;	
	int i, j;
	
	for (j = 0; j < ROWS; j++)		// For 0-5, run inner loop, print new line & increment.
	{
		for (i = 0; i < j + 1; i++)	// For 0, print $, increment to 1.
		{							// For 1, print $$, increment to 2.
			printf("$");			// For 3, print $$$, increment to 3.
		}							// For 4, print $$$$, increment to 4.
		printf("\n");				// For 5, print $$$$$, increment to 5.
	}
	
	getch();	// This is used to prevent the console window from closing on some systems.
	return 0;
}