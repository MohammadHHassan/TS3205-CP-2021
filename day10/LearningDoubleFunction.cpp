// day10
// LearningDoubleFunction.c

#include <stdio.h>
#include <math.h>

double hypo(double a, double b);

int main(void)
{
	double x, y, z;
	
	printf("This program calculates the hypotenuse value.\n");
	
	printf("Please enter the value of a: ");
	scanf(" %lf", &x);
	printf("Please enter the value of b: ");
	scanf(" %lf", &y);
	
	printf("\nGiven a=%g, b=%g\n", x, y);
	
	z = hypo(x,y);
	
	printf("Hypotenuse = %.2f", z);
	
	return 0;
}

double hypo(double a, double b)
{
	double c;
	
	c = sqrt(pow(a,2)+pow(b,2));
	return c;
}
