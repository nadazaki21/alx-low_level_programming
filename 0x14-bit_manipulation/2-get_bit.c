#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number to get to bit from
 * @index: the index of the bit i want to get, atrting at 0
 * Return: the value of it at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int size = sizeof(n) * 8; /*getting the number of bits*/

	if (index >= size)
	{
		return (-1);
	}

	n = n >> index;
	bit = n & 1;

	return (bit);
}
