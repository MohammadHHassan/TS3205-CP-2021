// LearningSwitch.c

#include <stdio.h>

int main(void)
{
	char input;
	
	printf("Please enter 'A' or 'B': ");
	scanf(" %c", &input);
	
	switch(input)
	{
		case 'A':	printf("You typed 'A'.\n");
					break;			// Go out from the flow/loop
					
		case 'a':	printf("You typed 'a'.\n");
					break;
					
		case 'B':	
		case 'b':	printf("You typed 'B' or 'b'.\n");
					break;
					
		default:	printf("You didn't type 'A' or 'B'.\n");
	}
	
	printf("Thank youu");
	
	return 0;
}

