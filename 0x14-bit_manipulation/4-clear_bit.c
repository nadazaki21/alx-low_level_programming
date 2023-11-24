#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to hae the it set in it
 * @index: bit to be set to one index
 * Return: 1 on success and -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setting_bit = 1 << index;
	unsigned int size = 4 * 8; /*getting the number of bits*/

	if (index >= size)
	{
		return (-1); /* index exceeded the number of bits present*/
	}

	setting_bit = ~(setting_bit);
	*n = *n & setting_bit;

	return (1);
}
