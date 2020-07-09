#include "holberton.h"

/**
 * malloc_checked - allocates and verifies memory for *b
 * @b: sizeof int
 *
 * Return: nothing
 *
 */

void *malloc_checked(unsigned int b)

{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	else
		return (num);
}
