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

	for (i = ((len -1) / 2) ; i < len-1 ; i++)
	{
		
		printf("%c", *(str + i));
		

	}
	putchar('\n');
}
