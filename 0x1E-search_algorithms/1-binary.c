#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: pointer to target array
 * @size: number of positions in an array
 * @value: target value
 * Return: target position, else -1
 **/

 int binary_search(int *array, size_t size, int value)
 {
	int x, y, left = 0, right = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x == right)
			printf("%i\n", array[x]);
			else
			printf("%i, ", array[x]);
		}
	y = left + (right - left) / 2;
	if (array[y] == value)
		return y;
	else if (value > array[y])
		left = y + 1;
	else if (value < array[y])
	right = y - 1;
	}
	return (-1);
}