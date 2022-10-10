#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the structure of a dog
 * @d: struct dog
 *
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
