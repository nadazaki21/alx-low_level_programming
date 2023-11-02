#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinates the second string to the first
 * @s1: string 1
 * @s2:: string 2
 * @n: number of charecters to be concatinated
 * Return: pointer to concatinated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lens1 = 0, lens2 = 0, limit, j = 0;
	char *ptr;

	if (s1 == NULL)
	{
		ptr = malloc(sizeof(char) * (strlen(s2) + 1));
		if (ptr == NULL)
			return  (NULL);
		ptr = s1;
	}
		
	else if (s2 == NULL)
	{
		ptr = malloc(sizeof(char) * (strlen(s1) + 1));
		if (ptr == NULL)
			return  (NULL);
		ptr = s2;
	}	
	else
	{
		lens1 = strlen(s1);
		lens2 = strlen(s2);

		if (n >= lens2)
			limit = lens2 + lens1 + 1;
		else
			limit = n + lens1 + 1;

		ptr = malloc(sizeof(char) * (limit + 1));
		if (ptr == NULL)
			return  (NULL);

		for (i = 0; i <= limit ; i++)
		{
			if (i == (limit))
				ptr[i] = '\0';
			else if (i >= lens1)
			{
				ptr[i] = s2[j];
				j++;
			}
			else
				ptr[i] = s1[i];
		}
	}
	return (ptr);
}
