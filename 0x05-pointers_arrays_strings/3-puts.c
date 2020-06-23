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
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
