#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - defines an arranged array
 * @min: minimum number
 * @max: maximum number
 * Return: the pointer to the array;
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, num;

	if (min > max)
	{
		return (NULL);
	}
	else if (min == max)
	{
		ptr = malloc(sizeof(int) * 1);

		if (ptr == NULL)
			return (NULL);

		ptr[0] = min;
	}
	else
	{
		ptr = malloc(sizeof(int) * (max -  min + 1));
		if (ptr == NULL)
		{
			return (NULL);
		}

		num = min;

		for (i = 0; i <  (max -  min + 1); i++)
		{
			ptr[i] = num;
			num++;
		}
	}

	return (ptr);
}
