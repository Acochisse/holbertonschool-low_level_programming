#include 'holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of a & b
 * @a: pointer to first int
 * @b: pointer to second int
 *
 * Return:void
 */

void swap_int(int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
