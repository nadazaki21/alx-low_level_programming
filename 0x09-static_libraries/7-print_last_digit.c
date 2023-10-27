
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_last_digit- checking if the ltter is lower case or not
* @n: the char to be checked
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

int print_last_digit(int n)
{
	int last_digit;


	last_digit = abs(n % 10);



	_putchar(last_digit + '0');

	/**
	 * printf ("%d", last_digit);
     */


	return (last_digit);
}

