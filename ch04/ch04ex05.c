// ch04ex05.c

/* Write a program that requests the download speed in megabits per second (Mbs) & the size of a file in megabytes (MB). The program should calculate the download time for the file. Note that in this context one byte is eight bits. Use type float, & use / for division. The program should report all three values (download speed, file size, & download time) showing two digits to the right of the decimal point, as in the following:

At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds. */

#include <stdio.h>

int main(void)
{
	const float BYTE_IN_BITS = 8.0;
	float dlspeed, fsize;
	
	printf("Enter a download speed in megabits per second (Mbs): ");
	scanf("%f", &dlspeed);
	printf("Enter the size of the file to be downloaded: ");
	scanf("%f", &fsize);
	printf("At %.2f Mbs, a file of %.2f MB downloads in %.2f seconds.\n", dlspeed, fsize, fsize / dlspeed * BYTE_IN_BITS);
	
	return 0;
}