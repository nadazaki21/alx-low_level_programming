#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to a newly
 *  allocated space in memory, which contains a copy of the
 *  string given as a parameter.
 * @str: pointer to string to be copied
 * Return: Null on failure, th pointer to newly allocated
 * memory on success
*/
char *_strdup(char *str)
{
	char *ptr;
	int counter = 0, i;

	while (*(str + counter) != '\0')
	{
		counter++;
	}

	ptr = malloc((sizeof(char) * counter));

	if (ptr == NULL || str  == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= counter; i++)
		{
			ptr[i] = str[i];
		}

		return (ptr);
	}

}
