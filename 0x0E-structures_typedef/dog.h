#ifndef MYSTRUCT_H
#define MYSTRUCT_H
/**
 * struct dog - has pointer elements to attributes of dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
