// LearningVariables.c

#include <stdio.h>		// Header file for input and output

int main(void)			// Main function. Computer will read the program here
{
	int a, b, c;		// Declare variables a, b and c as integer (whole number)
	a = 10;
	b = 100;
	c = a+b;
	
	printf("a = %d", a);	// Print out a = 10, conversion specifier %d for int
	printf("\nb = %d", b);
	
	printf("\n\na = %d, b = %d", a, b);
	printf("\nc = %d", c);
	
	return 0;
}
