#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char x;

	while (count < 10)
	{
		x = 'a';
		while (x <= 'z');
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	        count++;
	}
}
