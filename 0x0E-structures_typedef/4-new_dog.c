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

	while (ptr[i] != '\0')
	{
		len++;
		i++;
	}
	char *heap_copy = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
	{
		heap_copy[i] = ptr[i];
	}
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
	char *dog_name_heap = copy(name);
	char *dog_owner_heap = copy(owner);

	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		my_dog->name = dog_name_heap;
		my_dog->age = age;
		my_dog->owner = dog_owner_heap;
	}

	return (my_dog);
}
