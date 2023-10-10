
#include <stdio.h>
/**
* print_to_98 - checking if the ltter is lower case or not
* @n : num1
*
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d\n", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d\n", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}

			n--;

		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("error");
	}
}

