#include "holberton.h"

/**
 * print_last_digit - the function.
 *
 * @r: is the Variable of the function.
 *
 * Return: Always 0.
 */
int print_last_digit(int c)

{
	int num;

	num = c % 10;
	if (num >= 0)
	{
		_putchar(num + '0');
		return (n);
	}
	else
	{
		_putchar((n * -1) + '0');
		return (n * -1);
	}
	return (0);
}
