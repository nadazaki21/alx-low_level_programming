#include <stdio.h>
/**
 * print_array - prints array of integegrs
 * @a: pointer to array
 * @n: size of array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
