#include <stdio.h>
/**
* times_table - checking if the ltter is lower case or not
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			result = i * j;

			if (result > 9 && j != 0)
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
				printf("%d", result);

			}

			if (j != 9)
			{
				putchar(',');
			}

		}

		putchar('\n');
	}

}

