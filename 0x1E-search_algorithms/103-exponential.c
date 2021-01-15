#include "search_algos.h"

/**
 * printf_array - prints the array
 *
 * @array: target array
 * @size: size of target array
 *
 * Return: none
 */
void printf_array(int *array, size_t size)
{
	unsigned long int i;

	printf("Searching in array:");

	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * lower - determines the lower value out of 2
 *
 * @a: first
 * @b: second
 *
 * Return: lower value
 */
size_t lower(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}


/**
 * exponential_search - finds target value in array via exponential search
 *
 * @array: target array
 * @size: size of target array
 * @value: target value in array
 *
 * Return: index of value, or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	unsigned long int i = 1, lo;
	int x;

	if (array != NULL && size > 0)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
		lo = i / 2;
		i = lower(size - 1, i);
		printf("Value found between indexes [%lu] and [%lu]\n", lo, i);
		x = binary_search(array + lo, i + 1 - lo, value);
		if (x >= 0)
			return (x + lo);
	}
	return (-1);
}



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
