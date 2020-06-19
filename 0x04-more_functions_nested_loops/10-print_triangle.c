#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: input size
 * Return: nothing
 *
 */

void print_triangle(int size)

{
	int x;
	int y;
	int z;

	if (size <= 0)

	{
		_putchar('\n');
	}

	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				z = size - x - 1;
				if (y < z)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
