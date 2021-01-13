#include "search_algos.h"

/**
 * binary_search - searches an array for value by binary search
 * @array: target array
 * @size: length of the target array
 * @value: target value in array
 * Return: position or -1 if null or not in array
 */

int binary_search(int *array, size_t size, int value)
{
	int m, i, l = 0, r = (size - 1);

	if (!value || array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = l + (r - l) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;

		else
			r = m - 1;
	}
	return (-1);
}
