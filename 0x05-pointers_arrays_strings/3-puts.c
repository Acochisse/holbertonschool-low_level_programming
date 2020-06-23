#include "holberton.h"

/**
* _puts - prints the string *str
* @str: input string
*
* Return: nothing
*
*/

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
