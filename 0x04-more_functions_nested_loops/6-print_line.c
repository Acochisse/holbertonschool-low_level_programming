#include "holberton.h"


/**
 * print_line - prints a line n long
 * @n: lenth
 * Return: void
 *
 */

void print_line(int n)

{

	int x = 0;

	while (x < n)

	{

		if (x > 0)

			_putchar('_');

		x++;

	}

	_putchar('\n');

}
