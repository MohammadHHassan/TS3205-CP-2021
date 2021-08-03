// LearningIf.c

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)			// If x is less than 0 (negative number)
	{
		printf("Error! A negative number has been entered.");
	}
	
	printf("\nNumber entered: %d", x);
	
	return 0;
}

