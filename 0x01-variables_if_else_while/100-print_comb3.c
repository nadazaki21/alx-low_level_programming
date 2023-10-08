#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
	for (int i = 0 ; i < 9; i++)
	{
		for (int j = i + 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar (j + '0');

			if (i != 8)
			{
				putchar (',');
				putchar(' ');
			}
		}
	}
putchar('\n');

return (0);
}
