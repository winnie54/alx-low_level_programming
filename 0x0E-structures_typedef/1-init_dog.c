#include "dog.h"

/**
 * init_dog - initializes a variable of a type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dogs owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
