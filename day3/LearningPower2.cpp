// LearningPower2.c

#include <stdio.h>
#include <math.h>

int main(void)
{
	double area, pi, r, h;
	pi = 3.14;
	r = 2.0;
	h = 3.0;
	
	printf("Given pi=3.14, r=2.0, h=3.0\n");
	
	area = pi*r*(r+sqrt(pow(r,2)+pow(h,2)));
	printf("Area of cone = %.3f", area);
	
	return 0;
}
