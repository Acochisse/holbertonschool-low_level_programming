#include "holberton.h"

/**
 * tester - verifies if n has natural sqrt
 * @n: input value
 * @root: sqrt of n
 *
 * Return: value of sqrt
 */

int tester(int root, int n)
{
	if (n == root * root)
		return (root);
	else if (root == n || root == -n)
		return (-1);
	else
		return (tester(root + 1, n));
}

/**
 * _sqrt_recursion - prints the natural square root of n
 * @n: input value
 *
 *
 *
 * Return: sqrt of n, or -1 if no natural sqrt
 */

int _sqrt_recursion(int n)

{
	return (tester(0, n));
}
