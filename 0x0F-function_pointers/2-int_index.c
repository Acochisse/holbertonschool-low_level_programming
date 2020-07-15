#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an int
 * @array: src array
 * @size: int type
 * @cmp: compare function pointer
 *
 * Return: int val
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
			return (i);
		}
	}
	return (-1);
}
