#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - on malloc failure it return 98
 * as an exit code
 * @b: nummber of byted to be allocated
 * Return: void pointer that amlloc returns
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
