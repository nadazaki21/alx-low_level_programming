#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_sign - checking if the ltter is lower case or not
* @n: the char to be checked
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
        putchar('+');
		return (1);
	}
    else if ( n < 0)
    {
        putchar('-');
		return (-1);
    }
	else 
	{
        putchar('0');
		return (0);
	}
}

