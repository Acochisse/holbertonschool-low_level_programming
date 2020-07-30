#include "holberton.h"

/**
 * clear_bit - function that set the value of a bit to 0
 * @n: bit
 * @index: target index
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	*n &= ~(1 << index);
	return (1);
}
