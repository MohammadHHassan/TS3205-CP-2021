// Exercise1.c

/*	Declare variables a, l and w in double
	Print out a message "Area of rectangle calculator."
	Prompt a message for the user to enter value of length (l)
	Store this value in l
	Prompt a message for the user to enter value of width (w)
	Store this value in w
	Calculate the area of rectangle
	Print out the result.
*/

#include <stdio.h>

int main(void)
{
	double a, l, w;
	
	printf("Area of rectangle calculator.\n");
	
	printf("Please enter the value of length (l): ");
	scanf(" %lf", &l);
	
	printf("Please enter the value of width (w): ");
	scanf(" %lf", &w);
	
	a = l*w;
	
	printf("Area of rectangle = %.2f", a);
	
	return 0;
}


