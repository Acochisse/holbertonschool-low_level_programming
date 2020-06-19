#include "holberton.h"

/**
 * print_numbers - prints base 10 \n
 *
 * Return: none
 *
 */

void print_numbers(void)

{
	int x;


	for (x = 0; x < 10; x++)

	{

		_putchar(x + '0');

	}

	_putchar('\n');

}
