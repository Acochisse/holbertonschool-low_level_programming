#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line out of \
 * @n: input of num of chars
 * Return: Nothing
 *
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	else

	{
		for (y = 1; y <= n; y++)

		{
			for (x = 2; x <= y; x++)

			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');

		}
	}
}
