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
		printf("%c", '\n');
		return;
	}

	s++;
	_print_rev_recursion(s);
	printf("%c", *(s));
}
