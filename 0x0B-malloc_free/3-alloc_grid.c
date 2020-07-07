#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to multidimensional array
 * @width: width of array
 * @height: height of array
 *
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)

{
	int **arr;
	int i;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		{
			if (arr[i] == 0)
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			for (x = 0; x < width; x++)
				arr[i][x] = 0;
		}
	}
	return (arr);
}
