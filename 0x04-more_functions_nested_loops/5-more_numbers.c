#include <stdio.h>
#include "main.h"
/**
 * more_numbers - pritning numbers
 * Return: numbers from 0 to 9
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; i < 10; j++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			_putchar(i + '0');
		}

		_putchar('\n');
	}

}
