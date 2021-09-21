// day11
// LearningArrays.c

#include <stdio.h>

int main(void)
{
	int u[3] = {1, 2, 3};
	int s[3], i;
	
	printf("u = (%d, %d, %d)\n", u[0], u[1], u[2]);
	
	for(i=0 ; i<3 ; i++)
	{
		printf("%d\t", u[i]);
	}
	
	for(i=0 ; i<3 ; i++)
	{
		s[i] = u[i]*2;
	}
	
	printf("\n\ns[i] = u[i]*2\n");
	printf("s = (%d, %d, %d)\n", s[0], s[1], s[2]);
	
	for(i=0 ; i<3 ; i++)
	{
		printf("s[%d] = %d\n", i, s[i]);
	}
	
	return 0;
}
