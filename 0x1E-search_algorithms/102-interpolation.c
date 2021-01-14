#include "search_algos.h"

/**
 * interpolation_search - searches an index via interpolation
 *
 * @array: target array
 * @size: size of target array
 * @value: target value within array
 *
 * Return index position of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = (size - 1), p;

	if (!array || !size)
		return (-1);

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		p = lo + (((double)(hi - lo) / (array[hi] - array[lo]) *
			   (value - array[lo])));

		if (p > hi)
		{
			printf("Value checked array[%lu] is out of range\n", p);
			return (-1);
		}
		printf("Value checked array [%lu] = [%d]\n", p, array[p]);

		if (array[p] == value)
			return (p);

		if (array[p] < value)
			lo = p + 1;

		else
			hi = p - 1;
	}
	return (-1);
}
