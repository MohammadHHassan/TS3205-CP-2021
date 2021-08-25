// day7
// Program1.c

#include <stdio.h>

int main(void)
{
	int i, userInput, sum;
	sum=0;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Please enter a number: ");
		scanf(" %d", &userInput);
		
		sum = sum+userInput;
	}
	
	printf("Sum of all numbers = %d", sum);
	
	return 0;
}
