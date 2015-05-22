// ch04ex06.c

/* Write a program that requests the user's first name & then the user's last name. Have it print the entered names on one line & the number of letters in each name on the following line. Align each letter count with the end of the corresponding name, as in the following:

Melissa Honeybee
	  7        8
	  
Next, have it print the same information, but with the counts aligned with the beginning of each name.

Melissa Honeybee
7       8 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[40], lname[40];
	
	printf("Enter your first name. ");
	scanf("%s", fname);
	printf("Enter your last name. ");
	scanf("%s", lname);
	printf("%s %s\n", fname, lname);
	printf("%7zd %8zd\n", strlen(fname), strlen(lname));
	printf("%zd %7zd\n", strlen(fname), strlen(lname));
	
	return 0;
}