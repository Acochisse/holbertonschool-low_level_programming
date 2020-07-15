#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - indexes through an array
 * @array: src array
 * @size: size_t of array
 * @action: function pointer
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))


{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
