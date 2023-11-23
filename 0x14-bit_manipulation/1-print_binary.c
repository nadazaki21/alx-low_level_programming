#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to be converted to binary
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	else if (n == 1)
	{
		printf("1");
		return;
	}

	n = n >> 1;
	if (n == 0)
	{
		return;
	}

	print_binary(n);
	printf("%ld", n & 1);
}
