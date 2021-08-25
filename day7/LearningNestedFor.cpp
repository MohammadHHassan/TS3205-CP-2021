// day7
// LearningNestedFor.c

#include <stdio.h>

int main(void)
{
	int col, row;
	
	printf("Multiplication table:\n\n");
	printf("\t|\t1\t2\t3\t4\t5\n");
	printf("----------------------------------------------------------\n");
	
	for(row=1 ; row<=5 ; row++)
	{
		printf("%d\t|", row);
		
		for(col=1 ; col<=5 ; col++)
		{
			printf("\t%d", row*col);
		}
		
		printf("\n");
	}
	
	return 0;
}


