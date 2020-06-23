#include "holberton.h"

/**
 * puts2 - prints every other char in pointed str
 * @str: input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (x = 0; x < i; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
