#include <string.h>
#include <stdio.h>
/**
 * _puts -  printing a string whose pointer is given
 * @str: the pointer to the first srray of char
 * Return: returns the lenght of string exludin gthe terminating char
*/
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0 ; i < len ; i++)
	{
		printf("%c", *(str + i));
	}

	putchar('\n');
}
