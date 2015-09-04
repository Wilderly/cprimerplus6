// ch08ex08.c

/* Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or divistion. After getting your choice, the program asks for two numbers, then performs the requested operation. The program should accept only the offered menu choices. It should use type float for the numbers & allow the user to try again if he or she fails to enter a number. In the case of division, the program should prompt the user to enter a new value if 0 is entered as the value for the second number. */

#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void add(void);
void sub(void);
void mul(void);
void div(void);

int main(void)
{
	int choice;
	
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
			case 'a' : add();
				break;
			case 'b' : sub();
				break;
			case 'c' : mul();
				break;
			case 'd' : div();
				break;
			default : printf("Program error!\n");
				break;
		}
	}
		
	printf("Bye.\n");
	
	getch();
	return 0;
}

void add(void)
{
	int a, b, c;
	
	printf("Enter the 1st integer:\n");
	a = get_int();
	printf("Enter the 2nd integer:\n");
	b = get_int();
	
	c = a + b;
	
	printf("%d + %d = %d\n", a, b, c);
	
	while (getchar() != '\n')
		continue;
}

void sub(void)
{
	int a, b, c;
	
	printf("Enter the 1st integer (the one to subtract FROM):\n");
	a = get_int();
	printf("Enter the 2nd integer (the one to subtract):\n");
	b = get_int();
	
	c = a - b;
	
	printf("%d - %d = %d\n", a, b, c);
	
	while (getchar() != '\n')
		continue;
}

void mul(void)
{
	int a, b, c;
	
	printf("Enter the 1st integer:\n");
	a = get_int();
	printf("Enter the 2nd integer:\n");
	b = get_int();
	
	c = a * b;
	
	printf("%d x %d = %d\n", a, b, c);
	
	while (getchar() != '\n')
		continue;
}

void div(void)
{
	int a, b, c;
	
	printf("Enter the 1st integer (the one to divide in to):\n");
	a = get_int();
	printf("Enter the 2nd integer (the one to divide by):\n");
	b = get_int();
	
	c = a / b;
	
	printf("%d divided by %d = %d\n", a, b, c);
	
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	int ch;
	
	printf("Enter the letter of your choice:\n\n");
	printf("a. addition		b. subtraction\n");
	printf("c. multiplication	d. division\n");
	printf("q. quit\n\n");
	
	ch = get_first();
	
	while ((ch < 'a' || ch > 'd') && ch != 'q')
	{
		printf("Please respond with a, b, c, d, or q.\n\n");
		ch = get_first();
	}
	
	return ch;
}

char get_first(void)
{
	int ch;
	
	ch = getchar();
	
	while ((getchar()) != '\n' && isspace(ch)){
		while (getchar() != '\n')
			continue;
	}
		
	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);	// dispose of bad input
		printf(" is not an integer.\nPlease enter an");
		printf("integer value, such as 25, -178, or 3:");
	}
	
	return input;
}