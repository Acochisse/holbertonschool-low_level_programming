#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
