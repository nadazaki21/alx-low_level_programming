#include <stdlib.h>
/**
 * create_array - create_array
 * @size: size of array
 * @c:the charceter to be assigned to the array
 * Return: NULL on error or size 0, the pointe ron sucess
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
