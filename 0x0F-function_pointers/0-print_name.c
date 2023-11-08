#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @f: the pointer to the function that prints a string
 * @name: the string to be prtinted and sent to the function f
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		(*f)(name);
	}
}
