#include "holberton.h"

/**
 * more_numbers -prints 1-14 x10
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int lc;
	int x;

	for (lc = 0; lc < 10; lc++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
