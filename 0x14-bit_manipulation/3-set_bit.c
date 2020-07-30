#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: bit
 * @index: starting from 0 of the bit
 *
 * Return: 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	*n ^= (1 << index);

	return (1);
}
