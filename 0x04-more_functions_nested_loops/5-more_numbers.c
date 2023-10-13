#include <stdio.h>
#include "main.h"
/**
 * more_numbers - pritning numbers
 * Return: numbers from 0 to 9
*/
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);
		}

		putchar('\n');
	}

}
