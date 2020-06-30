#include <stdio.h>

/**
 * print_diagsums
 *
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int value;
	int sumx;
	int sumy;

	i = 0;
	value = 0;
	sumx = sumy = 0;

	while (i < (size * size))
	{
		value = a[i];
		sumx = sumx + value;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
		{
			value = a[i];
			sumy = sumy + value;
			i = i + (size -1);
		}
		printf("%d, %d\n", sumx, sumy);
}
