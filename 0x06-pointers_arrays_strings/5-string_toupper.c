#include <stdio.h>
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
		printf("%c", *(n + i));
		putchar('\n');
		/**(n + i) = toupper(*(n + i));*/
		*(n + i) = (*(n + i)) - 0x20 ;
		printf("%c", *(n + i));
		putchar('\n');

		i++;
	}
	return (n);
}

// is it aplha y , then is it capital n, then change it to upper case  