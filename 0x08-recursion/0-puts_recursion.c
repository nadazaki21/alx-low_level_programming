#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to string
 *
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		printf("%c", '\n');
		return;
	}

	printf("%c", *(s));
	s++;

	_puts_recursion(s);

}
