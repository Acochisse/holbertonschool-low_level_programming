#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - creates and new dog
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 * Return: NUll if fail or pointer
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = _strdup(name);
	if (!new_d->name)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = _strdup(owner);
	if (!new-d->owner)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	return (new_d);
}

/**
 * *_strdup -returns a pointer to targeted memory address
 * @str: target string
 *
 *
 *
 *
 * Return: pointer
 *
 */

char *_strdup(char *str)

{
	int i;
	int x;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		p[x] = str[x];
	p[x] = '\0';
	return (p);
}
