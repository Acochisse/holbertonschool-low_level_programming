#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: input pointer
 *
 * Return: nothing
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	i = 0;
	while (i < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[i][x]);
			if (x == 7)
				_putchar ('\n');
			x++;
		}
		i++;
	}
}
