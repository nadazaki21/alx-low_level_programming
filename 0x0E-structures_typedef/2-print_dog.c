#include "dog.h"
#include <stdio.h>
/**
 * print_dog - strint attributes in dof in struct dog
 * @d: pointer to struct
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		if (((*d).name) != NULL)
		{
			printf("Name: %s\n", ((*d).name));
		}

		if (((*d).owner) != NULL)
		{
			printf("Owner: %s\n", ((*d).owner));
		}
	}
}
