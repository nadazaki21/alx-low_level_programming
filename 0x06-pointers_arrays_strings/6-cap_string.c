#include <ctype.h>
/**
 * cap_string - function that capitalizes all words of a string.
 * @n: pointer to string
 * Return: pointer to string after change
*/

char *cap_string(char *n)
{
	int i = 1;
	int j;

	char delimiters[13] = {
	' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t'};

	*(n+0) = toupper(*(n+0));

	while (*(n + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(n + i) == delimiters[j])
			{
				*(n + i + 1) = toupper(*(n + i + 1));

			}
		}
		i++;
	}
	return (n);
}
