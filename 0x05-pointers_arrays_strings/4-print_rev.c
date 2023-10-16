#include <string.h>
#include <stdio.h>
/**
 * print_rev -  printing a string whose pointer is given
 * @s: the pointer to the first srray of char in reverse
 * Return: returns the lenght of string exludin gthe terminating char
*/
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len+1 ; i > 0 ; i--)
	{
		printf("%c", *(s + i));
	}

	putchar('\n');
}
