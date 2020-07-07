#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of char and initialises on a specific char
 * @size: size of array
 * @c: init char
 *
 *
 * Return: 0 on fail
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
