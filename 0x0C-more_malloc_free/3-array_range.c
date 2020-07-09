#include "holberton.h"

/**
 * array_range - creates defined array of int
 * @min: minimum of range
 * @max: maximum of range
 *
 * Return: creates array
 *
 */

int *array_range(int min, int max)

{
	int *range;
	int i;
	int x;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (i = min, x = 0; i <= max; i++, x++)
		range[x] = i;
	return (range);
}
