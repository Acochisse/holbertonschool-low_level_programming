#include "holberton.h"

/**
* _puts - prints the string *str
* @str: imput string
*
* Return: nothing
*
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str[i] != '\0')
	{
		_putchar(*str[i]);
		i++;
	}
	_putchar('\n');
}
