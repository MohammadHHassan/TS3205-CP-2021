// day9
// LearningGlobalVariable.c

#include <stdio.h>

void printSomething();		// Declaration of printSomething function
double money = 1.00;		// Global variable declaration

int main(void)
{
	//double money = 1.00;	// Local variable
	
	printf("Main: I have $%.2f in my pocket.\n", money);
	printSomething();
	
	return 0;
}

void printSomething()
{	
	printf("printSomething: I have $%.2f in my pocket.\n", money);
}
