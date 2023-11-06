#include "dog.h"
#include <stdlib.h>
/**
 * copy - copies an array of chars from stack to heap
 * @ptr: the pointe to the array of chars to e copies from stack
 * Return: a pointer to the new version in the heap
*/
char *copy(char *ptr)
{
	int i = 0, len = 0;
	char *heap_copy;

	while (ptr[i] != '\0')
	{
		len++;
		i++;
	}

	heap_copy = malloc(sizeof(char) * (len + 1));
	if (heap_copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		heap_copy[i] = ptr[i];
	}

	return (heap_copy);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to struct of new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len;
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	return (NULL);

	if (name != NULL)
	{
		i = 0;
		len = 0;
		while (name[i] != '\0')
		{
			len++;
			i++;
		}
		my_dog->name = malloc(sizeof(char) * (len + 1));
		(my_dog->name) = copy(name);
	}
	else
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	if (owner != NULL)
	{
		i = 0;
		len = 0;
		while (owner[i] != '\0')
		{
			len++;
			i++;
		}
		my_dog->owner = malloc(sizeof(char) * (len + 1));
		(my_dog->owner) = copy(owner);
	}
	else
	{
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
