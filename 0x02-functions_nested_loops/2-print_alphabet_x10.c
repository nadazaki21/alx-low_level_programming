#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - function for printing the alphabets
*/

void print_alphabet_x10(void)
{
char letter;
int i; 

    
    for (i = 0; i < 10 ; i++)
    {
        letter = 0x61;
      while (letter <= 0x7A)
	{
		_putchar(letter);
		letter++;
	}
       _putchar('\n');
    }
	
	

}
