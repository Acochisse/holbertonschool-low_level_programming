#include "holberton.h"

/**
 * jack_bauer - prints h and m in 24 format
 *
 *
 *
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x < 24; i++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
