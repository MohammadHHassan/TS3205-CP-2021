// day9
// LearningFunctions.c

#include <stdio.h>

void printSomething();		// Declare function called printSomething

int main(void)				// main function
{
	int i;
	
	for(i=0 ; i<10 ; i++)
	{
		printSomething();
	}
	
	return 0;
}

void printSomething()		// printSomething function
{
	printf("Name:	Mohammad Hj Hassan\n");
	printf("School:	Politeknik Brunei\n");
	printf("Gender: Male\n");
}
