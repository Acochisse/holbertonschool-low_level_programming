#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 *
 */

void print_alphabet_x10(void)

{
	int lc;
	int x;

	for (lc = 0; lc < 10; lc++)
	{
		for (x = 97; x <= 121; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
       	}

}
