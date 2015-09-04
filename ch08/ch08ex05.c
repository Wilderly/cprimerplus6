// ch08ex05.c

/* Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing strategy. For example, have the program intially guess 50, & have it ask the user whether the guess is high, low, or correct. If, say, the guess is low, have the next guess be halfway between 50 & 100, that is, 75. If that guess is high, let the next guess be halfway between 75 & 50, & so on. Using this binary search strategy, the program quickly zeroes in on the correct answer, at least if the user does not cheat. */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char response;
	int hi = 100;
	int lo = 1;
	int guess = (hi + lo) / 2;
	
	printf("Let's play Guess The Number! Choose a number between 1 & 100.\n");
	printf("Hit y & Enter if my guess is correct.\n");
	printf("Hit l & Enter if my guess is low or h & Enter if my guess is high.\n");
	printf("Is your number %d?\n", guess);
	
	while ((response = getchar()) != 'y')
	{
		if (response == '\n')
			continue;
			
		if (response != 'h' & response != 'l')
		{
			printf("Invalid response. Must type l, h, or y.\n");
			continue;
		}
		
		if (response == 'h')
			hi = guess - 1;
		else if (response == 'l')
			lo = guess + 1;
		guess = (hi + lo) / 2;
		
		printf("Well, is it %d?\n", guess);	
	}
	
printf("Booyakasha!\n");
	
	getch();
	return 0;
}