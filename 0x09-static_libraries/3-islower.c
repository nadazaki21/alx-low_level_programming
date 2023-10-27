#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* _islower - checking if the ltter is lower case or not
* @c: the char to be checked
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else /*if both were if an error would be produces beacuase there would be \
	 * no return to cover all of the cases if the if fail
	 */
	{
		return (0);
	}
}

