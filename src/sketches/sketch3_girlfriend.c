/*
	Test 4	
*/

#include <stdio.h>

int main()
{
	char ex[20];
	
	puts("Enter your girlfriend's name");
	scanf("%19s", ex);
	printf("\nDear %s.\n\n\tSorry, baby\n\tGoodbye!\n", ex);
	printf("\nBest regards, Nick\n");
	
	return 0;
}
