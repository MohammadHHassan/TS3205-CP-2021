// day9
// CreatingMenu.c

#include <stdio.h>		// Header file for printf/scanf
#include <windows.h>	// Header file for delay
#include <stdlib.h>		// Header file for screen clear

int main(void)
{
	char input;
	double a, b;
	a=0.0;
	b=0.0;
	
	do
	{
		system("cls");	// To clear the screen
		printf("Current values: \n");
		printf("a = %.1f,\tb = %.1f,\ta+b = %.1f\n", a, b, (a+b));
		printf("\nYour menu:\n");
		printf("a) Enter a new value for 'a': \n");
		printf("b) Enter a new value for 'b': \n");
		printf("q) Quit.\n");
		
		printf("\nPlease enter your choice: ");
		scanf(" %c", &input);
		
		switch(input)
		{
			case 'A':
			case 'a':	printf("Enter value for 'a': ");
						scanf(" %lf", &a);
						break;
						
			case 'B':
			case 'b':	printf("Enter value for 'b': ");
						scanf(" %lf", &b);
						break;
						
			case 'Q':
			case 'q':	printf("This program will terminate. Thank you :)");
						break;
						
			default:	printf("Invalid key.");
						Sleep(5000);
		}
	}while(input!='Q' && input!='q');
	
	return 0;
}

