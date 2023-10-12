#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - function to checker lower or uppe rcase of char
 * @c: the char to check
 * Return: 0 if lower case , 1 if upper case
*/

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else if (isupper(c) != 0)
	{
		return (1);
	}

}
