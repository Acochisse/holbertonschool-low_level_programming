#include "search_algos.h"

/**
 * jump search - function that sorts an array by jump search
 * @array: target array
 * @size: size of target array
 * @value: target value
 * Return: index where value is located, else -1
 */

int jump_search(int *array, size_t size, int value)

{
	size_t step = sqrt(size), previous = 0;

	long unsigned int i = 0, j;

	if (!array || !size)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += step;
	}

	previous = i - step;
	printf("Value found between indexes [%ld] and [%ld]\n", previous, i);

	for (j = previous; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
