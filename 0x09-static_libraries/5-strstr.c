#include <string.h>
/**
 * _strstr - function finds the first occurrence of the
 *  substring needle in the string haystack.
 *  The terminating null bytes (\0) are not compared
 * @haystack: string to search in
 * @needle:; string to search for
 * Return: pointer to start of sting found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j, k;
	unsigned int len_haystack = strlen(haystack);
	unsigned int len_needle = strlen(needle);
	char *ptr = 0;


	for (i = 0; i < len_haystack ; i++)
	{
		k = 0;

		if (haystack[i] == needle[k])
		{
			k++;
			ptr = (haystack + i);
			j = i + 1;

			while (haystack[j] == needle[k] && needle[k] != '\0' && haystack[j] != '\0')
			{
				k++;
				j++;
			}
		}

		if (k == len_needle)
		{
			return (ptr);
		}

	}

	return ('\0');

}
