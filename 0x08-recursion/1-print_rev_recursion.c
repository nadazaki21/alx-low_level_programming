#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print stign in reverse
 * @s: pointer to string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	
	_print_rev_recursion(s++);
	printf("%c", *(s));

}
