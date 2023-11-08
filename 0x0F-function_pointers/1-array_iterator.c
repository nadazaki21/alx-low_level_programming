#include <stdlib.h>
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to array of int
 * @size: size of the array
 * @action: pointer to function to perform on elements of the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
