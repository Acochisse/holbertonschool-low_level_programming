#include "search_algos.h"

/**
 * linear_search - searches for value in an array using linear search
 * @array: target array
 * @size: number of elements in target array
 * @value: target value
 * Return: -1 if not present or NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!value || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
