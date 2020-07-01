#include "holberton.h"

/**
 * _pow_recursion - prints result of x^y
 * @x: input base value
 * @y: input power
 *
 *
 * Return: x to power y, or -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
