// ch05ex04.c

/* Write a program that asks the user to enter a height in centimeters & then displays the height in centimeters & in feet & inches. Fractional centimeters & inches should be allowed, & the program should allow the user to continue entering heights until a nonpositive value is entered. A sample run should look like this:

Enter a height in centimeters: 168.7
168.0 centimeters (cm) = 5 feet (ft), 6.4 inches (in) */

#include <stdio.h>

int main(void) {
	const float CM_TO_FT = 30.48, CM_TO_IN = 2.54, IN_TO_FT = 12.0;
	float cm, in;
	int ft;
	
	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);
	
	while (cm > 0) {
		ft = cm / CM_TO_FT;
		in = (cm / CM_TO_IN) - (ft * IN_TO_FT);		// Can't use % for non-integers. :-/
		printf("%.1f cm = %d ft, %.1f in\n", cm, ft, in);
		
		// Without the following, the program would loop endlessly.
		printf("Enter another value or 0 to quit.\n");
		scanf("%f", &cm);
	}
	
	return 0;
}