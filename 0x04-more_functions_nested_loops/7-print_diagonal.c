#include "main.h"
/**
 * print_diagonal - printing diagonal
 * @n: number of line to print
*/

void print_diagonal(int n)
{
	int i, j;
	int spaces = 0;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0; j < spaces; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
			spaces++;

		}
	}

}
