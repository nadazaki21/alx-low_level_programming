#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters passed
 * Return: the sum of all paraameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}

		va_end(args);
		return (sum);
	}
}
