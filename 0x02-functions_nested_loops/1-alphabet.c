#include <stdio.h>

/**
 * main - Entry point
 * This program prints a..z x1
 * Return: 0 (Success)
 */

int main(void)
{
	char x;

	x = 97;
	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
