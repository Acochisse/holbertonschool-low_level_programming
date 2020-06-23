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
	while(*str)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
