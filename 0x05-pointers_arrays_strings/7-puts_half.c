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

	/*printf("the length is %d \n", len);*/

	for (i = (len / 2) ; i < len ; i++)
	{
		/*printf("now index %d", i);*/
		printf("%c", *(str + i));

	}
	putchar('\n');
}
