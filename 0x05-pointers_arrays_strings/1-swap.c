#include 'holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of a & b
 * @a: pointer to first int
 * @b: pointer to second int
 *
 * Return: oid
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
