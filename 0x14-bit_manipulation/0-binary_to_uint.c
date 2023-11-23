#include "main.h"
/**
 * binary_to_uint - that converts a binary number to an unsigned int.
 * @b: pointer to stringg of s and 0s
 * Return: the converted number in decimal.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, converted_bit, len = 0;
	int i, power = 0;
	const char *tmp;

	if (b == NULL)
		return (0);

	tmp = b;
	while ((*tmp) != '\0')
	{
		len++;
		tmp++;
	}

	power = len - 1;

	while ((*b) != '\0')
	{
		if (*b == '1')
		{
			converted_bit = 1;
			for (i = 0 ; i < power ; i++)
				converted_bit = converted_bit * 2;

			sum = sum + converted_bit;
		}
		else if (*b == '0')
		{

		}
		else
			return (0);

		b++;
		power--;
	}

	return (sum);
}
