// day6
// Example1.c

#include <stdio.h>

int main(void)
{
	int a=10, b=15, c, answer;
	c = a+b;
	
	printf("Given a = %d, b = %d\n", a, b);
	
	do
	{
		printf("What is a+b? ");
		scanf(" %d", &answer);
		
		if(c!=answer)
		{
			printf("Wrong answer. Please try again.\n");
		}
	}while(c!=answer);		// Keep asking the user as long as the answer is incorrect
	
	printf("Your answwer is correct! Thank you :)");
	
	return 0;
}
