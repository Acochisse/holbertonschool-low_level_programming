#include "holberton.h"

/**
 * print_most_numbers - prints some numbers
 *
 * Return: void
 *
 */

void print_most_numbers(void)

{

	int x = 0;

	for (x = 48; x <=57; x++)

	{
		if ((x != 50) && (x != 52))

			_putchar(x);

	}

	_putchar('\n');

}
