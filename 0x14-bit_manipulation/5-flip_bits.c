#include "main.h"
/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: the numbers of bits needed to flip to get from num1 to num2
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, cursor = 1, bit_n, bit_m, size = 4 * 8, i;

	if (n == m)
		return (0);

	for (i = 0; i < size; i++)
	{
		bit_m = cursor & m;
		bit_n = cursor & n;

		if (bit_m != bit_n)
		{
			counter++;
		}

		cursor = cursor << 1;
	}

	return (counter);
}
