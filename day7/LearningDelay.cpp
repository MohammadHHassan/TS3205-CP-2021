// day7
// LearningDelay.c

#include <stdio.h>			// Header file for printf & scanf
#include <windows.h>		// Header file for delay

int main(void)
{
	int a;
	
	for(a=1 ; a<=10 ; a++)
	{
		printf("%d. Mohammad Hj Hassan\n", a);
		Sleep(1000);		// Delay for 1 sec
	}
	
	return 0;
}
