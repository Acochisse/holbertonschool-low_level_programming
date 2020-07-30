#include "holberton.h"

/**
 * binary_to_uint - converts binary into unsigned int
 * @b: binary input
 *
 *
 * Return: unsigned int value of b
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int i;
	unsigned int num;
	unsigned int ret = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;

	for (num = 1; i > 0; i--, num *= 2)
	{
 		if(!(b[i - 1] == '0' || b[i - 1] == '1'))
			return (0);

		ret += (b[i - 1] - '0') * num;
	}
	return (ret);
}
