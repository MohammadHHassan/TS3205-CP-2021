// LearningScanf.c

#include <stdio.h>

int main(void)
{
	int a, b, c;		// Declaration of variables a, b and c to int
	
	printf("Please enter the value of a: ");
	// Prompt a message for the user to enter value of a
	scanf(" %d", &a);		// Store the entered value in a
	
	printf("Please enter the value of b: ");
	scanf(" %d", &b);
	
	printf("c = %d\n", c);
	c = a+b;
	printf("c = a+b = %d", c);
	
	return 0;
}
