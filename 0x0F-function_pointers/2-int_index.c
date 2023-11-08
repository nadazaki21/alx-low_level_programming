#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to function that comapes
 * Return: the index og the element that is an ineteger
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int flag;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		if (cmp != NULL && array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				flag = (cmp(array[i]));
				if (flag != 0)
				{
					return (i);
				}
			}
		}
		return (-1);
	}
}
