#include "dog.h"
/**
 * free_dog - free dynamically allocated memory for struct
 * @d: pointer to struct
*/
void free_dog(dog_t *d)
{
	free(d);
}
