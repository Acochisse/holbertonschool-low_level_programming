#include "holberton.h"

/**
 * get_bit - returns value of bit in index
 * @n: bit
 * @index: index
 *
 * @Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)

{
	return ((n >> index) & 1);
}
