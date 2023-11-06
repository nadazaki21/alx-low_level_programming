#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: pointer to srtuct
 * @name: name element in struct
 * @age: age element in struct
 * @owner: owner element in struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		
	}
	
	if (name != NULL)
	{
		d->name = name;
	}

	if (owner != NULL)
	{
		d->owner = owner;
	}

	d->age = age;
}
