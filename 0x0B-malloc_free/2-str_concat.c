#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: sting 1
 * @s2: string 2
 * Return: string 1 if sting 2 is null, string 2 if string 1 is null ,
 *  null if oth are null, both concatinated if both are not null
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int lens1 = 0, lens2 = 0;
	int i, position;
	

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char) * 1);
		ptr[0] = ' ';
		return ptr;
	}
	 	
		
	else if (s1 == NULL)
	{
		while (*(s2 + lens2) != '\0')
		{
			lens2++;
		}
		ptr = malloc(sizeof(char) * (lens2) + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i <= lens2 ; i++)
			ptr[i] = s2[i];

		
	}
	else if (s2 == NULL)
	{
		while (*(s1 + lens1) != '\0')
		{
			lens1++;
		}
		ptr = malloc(sizeof(char) * (lens1) + 1);
		if (ptr == NULL)
			return (NULL);

		for (i = 0; i <= lens1 ; i++)
			ptr[i] = s1[i];
		
		
	}
	else
	{
		while (*(s1 + lens1) != '\0')
		{
			lens1++;
		}
		while (*(s2 + lens2) != '\0')
		{
			lens2++;
		}
		/* allocate memory*/
		ptr = malloc(sizeof(char) * (lens1 + lens2) + 1);
		if (ptr == NULL)
			return (NULL);
		/* concatinate the 2 strinsg togther*/
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
	}
	return ptr;
}
