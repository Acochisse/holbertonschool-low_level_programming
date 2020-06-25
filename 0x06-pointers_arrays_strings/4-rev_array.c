#include "holberton.h"

/**
 * reverse_array - reverses array string
 *@a: input array
 *@n: array size
 *
 *Return: output pointer to dest
 */

void reverse_array(int *a, int n)

{
	int bucket;
	int i;

	n--;
	for (i = 0; i <= n; i++)
	{
		bucket = a[i];
		a[i] = a[n];
		a[n] = bucket;
		n--;
	}
}
