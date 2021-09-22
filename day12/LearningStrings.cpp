// day12
// LearningStrings.c

#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("Please enter your name: ");
	scanf(" %[^\n]s", &name);		// Read user input until user pressed enter
	
	printf("Your name is %s", name);	// %s prints out the string
	
	return 0;
}
