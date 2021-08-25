// day9
// LearningFunctionsParameter.c

#include <stdio.h>

// Declaration of moneyConverter function (type double)
// Contains one parameter, double money
double moneyConverter(double money);

int main(void)
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM 3.11\n");
	
	printf("\nPlease enter your money: ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);
	
	printf("\nYour BND %.2f has been converted to RM %.2f", input, duit);
	
	printf("\nBND 200.00 = RM %.2f", moneyConverter(200));
	printf("\nBND 400.00 = RM %.2f", moneyConverter(400));
	printf("\nBND 500.00 = RM %.2f", moneyConverter(500));
	
	return 0;
}

double moneyConverter(double money)
{
	return money*3.11;
}

