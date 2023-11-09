#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything. 
 * @format: the type of variable to be printed
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char types_letters[4] = {'c', 'i', 'f', 's'};
	void (* ptr_fun[]) (va_list) = {print_char, print_integer, print_float, print_string};

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while ((j < 4))
		{
			if (format[i] == types_letters[j])
			{
				ptr_fun[j](args);
				if (j != 3)
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
