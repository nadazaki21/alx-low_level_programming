#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to struct of new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name = name;
	char *dog_owner = owner;

	dog_t *my_dog = malloc(sizeof(dog_t) * 1);

	if (my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		my_dog->name = dog_name;
		my_dog->age = age;
		my_dog->owner = dog_owner;
	}

	return (my_dog);
}
