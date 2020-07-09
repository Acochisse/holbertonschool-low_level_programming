#include "holberton.h"

/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: input number of array ints
 * @size: bytesize of ints
 *
 * Return: pointer to alloc mem
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	for (i = 0; i < size; i++)
		p[i] = 0;
	return (p);
}
