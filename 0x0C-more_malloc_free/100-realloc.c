#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - make the realloc function using the  malloc function
 * @ptr: pointer to old block
 * @old_size: old size of the block of the block of memory
 * @new_size: new size of the blovk of memeory
 * Return: pointet to the new block of code
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		new_memory = malloc(new_size);

		for (i = 0; i < old_size; i++)
		{
			((char *)new_memory)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (new_memory);
	}
	else
	{
		new_memory = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			((char *)new_memory)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (new_memory);
	}
}
