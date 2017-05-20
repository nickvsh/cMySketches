/* 
 * The program to calculate cards in the shoe.
 * Released under GPL
 * (copileft) 2017
 */

#include <stdio.h>

int main() 
{
	int decks;

	puts("Enter number of decks");
	scanf("%i", &decks);
	if (decks < 1) { 
		puts("Decks must be at least 1");
		return 1;
	}
	printf("We have %i cards\n", (decks * 52));
	return 0;
}
