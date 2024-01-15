#include "main.h"
/**
 * print_binary_helper - helper function to print the binary representation
 * @n: the number to be converted to binary
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary_helper(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary_helper(n);
}
