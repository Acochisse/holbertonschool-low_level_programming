#include "holberton.h"

/**
 * factorial - prints factorial
 * @n: input number
 *
 *
 *
 * Return: 0 if in is lower, -1 to indicate error
 */

int factorial(int n)

{
	if (n < 2 && n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (0);
}
