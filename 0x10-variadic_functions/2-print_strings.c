#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints a string followed by a new line
 * @separator: strings that separates the stings in argguments
 * @n: the number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	 unsigned int i, j;
	char *ptr;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = 0;
		ptr = va_arg(args, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			while (ptr[j] != '\0')
			{
				printf("%c", ptr[j]);
				j++;
			}
		}

		if (separator != NULL && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
