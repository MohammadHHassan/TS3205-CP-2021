// day10
// LearningParameters.c

#include <stdio.h>		// Header file for printf & scanf

void stars(int n);		// Declaration of stars function with parameter n

int main(void)
{
	int k=5;
	
	stars(k);
	stars(2*k);
	stars(100);
	
	return 0;
}

void stars(int n)
{
	int i;
	
	for(i=1 ; i<=n ; i++)
	{
		printf("* ");
	}
	printf("\n");
}
