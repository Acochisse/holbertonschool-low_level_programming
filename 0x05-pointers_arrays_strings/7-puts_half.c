#include "holberton.h"

/**
 * puts_half - prints the second /2 string
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		for (x = i / 2; x < i; x++)
			_putchar(str[x]);

	else
		for (x = (i + 1) / 2; x < i; x++)
			_putchar(str[x]);
	_putchar('\n');
}
