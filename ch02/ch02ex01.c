//  ch02ex01.c

/* Write a program that uses one printf() call to print your first name & last name on one line, uses a second printf() call to print your first & last names on two separate lines, & uses a pair of printf() calls to print your first & last names on one line. */

#include <stdio.h>

int main(void)
{
    printf("John Doe\n");
    printf("John\nDoe\n");
    printf("John ");
    printf("Doe\n");
    return 0;
}
