#include <stdio.h>

/**
 * main - Entry point
 * This program prints a..z x 10
 * Return: 0 (Success)
 */

int main(void)
{
	char x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 97;
		while (x <= 122)
		{
			putchar(x);
			x++;
		}
		putchar ('\n');
		y++;
	}
	return (0);
}
