#include <stdio.h>
#include"main.h"
/**
* print_alphabet - function for printing the alphabets
*/
void print_alphabet(void)
{
char letter;
letter = 0x61;

	while (letter <= 0x7A)
	{
		_putchar(letter);
		letter++;
	}
	putchar('\n');

}
