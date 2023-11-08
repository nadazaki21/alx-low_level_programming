#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to function that comapes
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = NULL;
	int i;
	int flag;

	if (size <= 0)
	{
		return (-1);
	}
	
	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			flag = (array[i]);
			if (flag != 0)
			{
				index = i;
				break;
			} 
		}
	}
	else
	{
		return(-1);
	}

	if (index == NULL)
	{
		return (-1);
	}
	else
	{
		return (index);
	} 
}
