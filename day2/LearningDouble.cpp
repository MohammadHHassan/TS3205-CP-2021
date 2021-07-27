// LearningDouble.c

#include <stdio.h>

int main(void)
{
	double number1, number2, number3;
	number1 = 1.5555555555;
	number2 = 3.2;
	number3 = number1 + number2;
	
	printf("Number 1 = %.2f, Number 2 = %.2f", number1, number2);
	printf("\nNumber 3 = %.3f", number3);
	
	return 0;
}
