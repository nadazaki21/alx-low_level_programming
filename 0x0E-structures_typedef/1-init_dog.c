#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: pointer to srtuct
 * @name: name element in struct
 * @age: age element in struct
 * @owner: owner element in struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
