#include "search_algos.h"
#include "math.h"
/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: pointer to first elemt in an array
 * @size: the size fo the array
 * @value: the value to serach for
 * Return: the index of the value to srearch for
*/


int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size), i;
	size_t lower = 0;
	size_t higher = lower + m;

	if (array == NULL)
		return (-1);

	while (lower <= (size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);

		if (higher > (size - 1))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);
			for (i = lower; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			break;
		}

		else if (value > array[lower] && value <= array[higher])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);
			for (i = lower; i <= higher; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		lower = lower + m;
		higher = lower + m;
	}
	return (-1);
}
