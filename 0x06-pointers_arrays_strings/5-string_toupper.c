#include <ctype.h>
/**
 * string_toupper - changes awhole string into an upper case
 * @n: pointer to string
 * Return: pointer to string after changing
*/
char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		*(n + i) = toupper(*(n + i));
		i++;
	}
	return (n);
}
