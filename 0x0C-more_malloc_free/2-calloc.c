#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates dynamic memoery using malloc
 * @nmemb: number of bytes
 * @size: size of bbytes
 * Return: the void pointet that malloc returns
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		char *byte_ptr = (char *)ptr;

		for (i = 0; i < size * nmemb; i++)
		{
			byte_ptr[i] = 0;
		}
	}
	return (ptr);
}
