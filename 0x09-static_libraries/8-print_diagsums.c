#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int i, element;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		element = a[i * size + i];
		sum1 = sum1 + element;
	}

	printf("%d, ", sum1);

	for (i = (size - 1); i >= 0; i--)
	{
		element = a[i * size + (size - 1 - i)];

		sum2 = sum2 + element;
	}

	printf("%d", sum2);
	putchar('\n');
}
