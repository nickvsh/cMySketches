/* 
	Test 5
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char suit[3];
	
	printf ("Enter the cardsuit (C,D,H...)\n");
	scanf ("%2s",suit);
	printf ("You entered\t\"%s\"\n", suit);
	switch (suit[0]) {
	case 'C':
		puts("Clubs (Трефы)");
		break;
	case 'D':
		puts("Diamonds (Бубны)");
		break;
	case 'H':
		puts("Hearts (Черви)");
		break;
	default:
		puts("Spades (Пики)");
	}
	return 0;
}
