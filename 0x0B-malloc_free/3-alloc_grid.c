#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: rows number
 * @height: rows number
 * Return: pointer to 2D dynamically allocated array
*/
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int **matrix;
		int i, j, k;

		matrix = malloc(sizeof(int *) * height);
		if (matrix == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < width; i++)
		{
			*(matrix + i) = (int *)malloc(sizeof(int) * width);

			if (*(matrix + i) == NULL)
			{
				for (k = 0; k <= i; k++)
				{
					free(*(matrix + k));
				}
				free(matrix);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(matrix + i) + j) = 0;
			}
		}
		return (matrix);
	}
}
