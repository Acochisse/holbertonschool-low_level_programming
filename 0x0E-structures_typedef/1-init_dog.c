#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable
 * @d: structure pointer
 * @name: pointer char
 * @age: float type int
 * @owner: pointer type char
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
