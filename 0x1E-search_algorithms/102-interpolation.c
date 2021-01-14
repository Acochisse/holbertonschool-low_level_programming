#include "search_algos.h"

/**
 * interpolation_search - searches an index via interpolation
 * @array: target array
 * @size: size of target array
 * @value: target value within array
 * Return: index position of value or -1
 */

int interpolation_search(int *array, size_t size, int value)

{
	size_t lo = 0, hi = (size - 1), pos;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			    (value - array[lo]));

		if (pos > hi)
		{
			printf("Value checked array[%lu] is out of range\n",
                               pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
