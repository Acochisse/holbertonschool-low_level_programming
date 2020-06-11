#include <stdio.h>
/**
 * main - Entry point
 * this program prints a-z,A-Z\n
 * Return: 0 (Sucess)
 */
int main(void)
{
	int x;
	int y;

	for (x = 97; x < 123; x++)
		putchar(x);
	for (y = 65; y < 91; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
