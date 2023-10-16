#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half the string
 * @str: pointer to sting to be printed
*/
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if ((len % 2) == 0)
	{
		for (i = (len / 2) ; i < len ; i++)
		{
			printf("%c", *(str + i));

		}
	}
	else
	{
		for (i = ((len / 2) + 1) ; i < len ; i++)
		{
			printf("%c", *(str + i));
		}

	}
	putchar('\n');
}
