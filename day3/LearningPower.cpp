// LearningPower.c

#include <stdio.h>		// printf and scanf
#include <math.h>		// Call math library

int main(void)
{
	double a, x, y;
	
	x = 2;
	y = 5;
	
	a = pow(x,y);
	
	printf("a = %g", a);
	
	return 0;
}
