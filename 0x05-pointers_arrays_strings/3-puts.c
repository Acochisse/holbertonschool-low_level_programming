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
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		i++;
	}
	_putchar('\n');
}
