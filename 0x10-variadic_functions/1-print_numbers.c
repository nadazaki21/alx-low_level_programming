#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: numbers separators
 * @n: number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = 0;
		printf("%d", va_arg(args, int));
		if (separator != NULL && (i != (n - 1)))
		{
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		}
	}

	printf("\n");
}
