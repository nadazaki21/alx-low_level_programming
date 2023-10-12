#include "main.h"
/**
 * print_triangle - printing a tri
 * @size: size of the tri
*/
void print_triangle(int size)
{
	int i, j, k; /* three counters*/
	int space, hash;

	space = size - 1;
	hash = 1;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= space ; j++)
			{
				printf(" ");
			}

			for (k = 0; k < hash ; k++)
			{
				printf("#");
			}

			printf("\n");
			space--;
			hash++;

		}

	}
}
