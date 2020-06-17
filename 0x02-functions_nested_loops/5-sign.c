#include "holberton.h"

/**
 * print_sign - prints if n < 0
 * 0 is n is 0, - if n is > 0
 * Return: 0 if greater than 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
