#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - function to checker if dgit
 * @c: the char to check
 * Return: 0 if not, 1 if it is
*/

int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		printf("error");
	}

}
