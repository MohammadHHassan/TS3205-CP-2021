// Exercise3.c

/*	Copy and paste all the code lines from BruneiDollarToRM.c
	Modify this program so that it accepts user's input for
	the BND value.
	(Note that conversion specifier scanf(" %lf", ...); for double)
	Print out the conversion.
*/

#include <stdio.h>

int main(void)
{
	double bnd, rm;
	
	printf("BND to RM Converter\n\n");
	
	printf("Please enter the BND value: ");
	scanf(" %lf", &bnd);
	
	rm = bnd*3.0;
	printf("BND %.2f = RM %.2f", bnd, rm);
	
	return 0;
}
