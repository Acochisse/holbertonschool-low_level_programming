#include <stdio.h>
/**
*main - Entry point
*This program prints a-z --q&e
*Return: 0 (success)
*/
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x == 101 || x == 113)
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
