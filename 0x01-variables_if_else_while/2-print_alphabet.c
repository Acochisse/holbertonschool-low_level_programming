#include <stdio.h>
/**
* main - Entry point
* This program prints a-z lowercase
* Return: 0 (success)
*/
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
