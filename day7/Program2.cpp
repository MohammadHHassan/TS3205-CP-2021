// day7
// Program2.c

/*	Prompt a message for the user to enter a value 3 times
	Store the value entered in x (double)
	Sum all the values together
	Give 1 second delay between each prompt
	
	Count the amount of large values
		(Large values are considered to be larger than 100)
	Calculate the average of the 3 values
	Print out: Sum, Large values & Average
*/

#include <stdio.h>
#include <windows.h>

int main(void)
{
	int largeValues, i;
	double x, sum, average;
	
	sum=0;
	largeValues=0;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		sum = sum+x;		// Calculating sum 
		
		if(x>100)
		{
			largeValues++;		// Increment largeValues for x>100
		}
		
		Sleep(1000);		// Delay for 1 sec
	}
	
	average = sum/3;
	
	printf("\nSum = %.1f", sum);
	printf("\nLarge values count = %d", largeValues);
	printf("\nAverage = %.1f", average);
	
	return 0;
}
