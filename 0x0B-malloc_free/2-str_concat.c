#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int lens1 = 0, lens2 = 0;
	int i, position;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	else
	{
		while (*(s2 + lens2) != '\0')
		{
			lens2++;
		}
		while (*(s1 + lens1) != '\0')
		{
			lens1++;
		}

		ptr = malloc(sizeof(char) * (lens1 + lens2));

		for (i = 0; i < lens1; i++)
		{
			ptr[i] = s1[i];
		}

		position = lens1;
		for (i = 0 ; i <= lens2; i++)
		{
			ptr[position] = s2[i];
			position++;
		}
		return (ptr);

	}
}
