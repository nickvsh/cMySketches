/*
	Test #2
*/

#include <stdio.h>

int main ()

{
	int card_count = 0;
	
	puts("Enter card count");
	scanf("%d", &card_count);
	if (card_count > 10)
			puts("Cards are good. Raise the bet!");
	return 0;
}

