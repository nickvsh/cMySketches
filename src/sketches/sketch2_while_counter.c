/*
	Test 3
*/

# include <stdio.h>

int main()
{
	int counter;
	
	printf("Enter the counter = \t");
	scanf("%i", &counter);
	while (counter > 0) {
		printf("#%i\n", counter);
		counter--;
	}
	return 0;
}
