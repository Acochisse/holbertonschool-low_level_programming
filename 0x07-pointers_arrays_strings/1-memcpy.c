#include "holberton.h"

/**
 * _memcpy - copies memory block
 * @dest: output memory block
 * @src: input memory block
 * @n: bytes filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i< n; n++)
		dest[i] = src[i];

	return (dest);
}
