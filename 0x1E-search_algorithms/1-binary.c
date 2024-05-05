#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: pointer to first elemt in an array
 * @size: the size fo the array
 * @value: the value to serach for
 * Return: the index of the value to srearch for
*/

int binary_search(int *array, size_t size, int value)
{
	size_t middle;
	size_t i = 0;
	int ret;

	if (array == NULL)
		return (-1);

	if (size % 2 == 0)
		middle = (size / 2) - 1;
	else
		middle = (size / 2);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == (size - 1))
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");

	if (array[middle] == value)
		return (middle);

	if (size == 1 && array[middle] != value)
		return (-1);

	if (array[middle] < value)
	{
		ret = binary_search((array + middle + 1), (size - middle  - 1), value);
		if (ret != -1)
			return (ret + (size - middle  - 1));
		else
			return (-1);
	}
	else
		ret = binary_search(array, (size - middle - 1 - 1), value);
	return (ret);
}
