// LearningIfElse.c

#include <stdio.h>

int main(void)
{
	int a, remainder;
	
	printf("Please enter an integer value: ");
	scanf(" %d", &a);
	
	remainder = a%2;
	
	if(remainder==0)
	{
		printf("Your number is EVEN");
	}
	else
	{
		printf("Your number is ODD");
	}
	
	return 0;
}

