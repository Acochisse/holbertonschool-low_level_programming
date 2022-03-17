#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: target position in array
 * @return: first index where value is, else -1
 **/

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
