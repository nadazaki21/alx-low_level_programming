#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to struct of new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	static dog_t my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

	return (&my_dog);
}
