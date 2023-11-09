#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - prints the chr pointed to by va_list
 * @x: current var pointed to
*/
void print_char(va_list x)
{
	printf("%c", va_arg(x, int));
}
/**
 * print_float - prints the float pointed to by va_list
 * @x: current var pointed to
*/
void print_float(va_list x)
{
	printf("%f", va_arg(x, double));
}
/**
 * print_integer - prints the int pointed to by va_list
 * @x: current var pointed to
*/
void print_integer(va_list x)
{
	printf("%d", va_arg(x, int));
}
/**
 * print_string- prints the string pointed to by va_list
 * @x: current var pointed to
*/
void print_string(va_list x)
{
	char *ptr;

	ptr = va_arg(x, char*);

	if (ptr != NULL)
	{
		printf("%s", ptr);
	}
	else
	{
		printf("(nil)");
	}
}
/**
 * print_all - function that prints anything.
 * @format: the type of variable to be printed
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char types_letters[4] = {'c', 'i', 'f', 's'};

	void (*ptr_fun[]) (va_list) = {
	print_char, print_integer, print_float, print_string};

	va_start(args, format);
	while (format[i] != '\0' && (format != NULL))
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
