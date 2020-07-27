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
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(arr + i) = 0;
	return (arr);
}
