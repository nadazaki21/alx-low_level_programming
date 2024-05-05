#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 *  in an array of integers using the Linear search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: the size of the array ti be searched
 * @value: the value that we are looking for
 * Return: the index of the value we're seraching for
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);

	}

	return (-1);
}
