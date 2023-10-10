#include <stdio.h>
#include <stdlib.h>
/**
* print_times_table - checking if the ltter is lower case or not
* @n : number of table
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

void print_times_table(int n)
{
	int i, j, result;

	if ((n > 0) && (n < 15))
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				result = i * j;

				if (result > 9 && result < 100 && j != 0)
				{
					putchar(' ');
					putchar(' ');
					printf("%d", result);
				}
				else if (result >= 100 && j != 0)
				{
					putchar(' ');
					printf("%d", result);
				}
				else if (j == 0)
				{
					printf("%d", result);
				}
				else
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					printf("%d", result);
				}
				if (j != n)
					{putchar(','); }
			}
			putchar('\n');
		}
	}
	else if (n == 0)
		printf("%d\n", 0);
}

