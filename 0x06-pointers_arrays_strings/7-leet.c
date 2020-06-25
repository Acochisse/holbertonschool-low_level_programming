#include "holberton.h"

/**
* leet - encodes string
* @c: input string
*
* Return: encoded value
*/

char *leet(char *c)
{
	int i;
	int r;

	int x[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int y[10] = {'4', '3', '0', '7', '1', '3', '0', '7', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (r = 0; r < 10; r++)
			if (c[i] == x[r])
			{
				c[i] = y[r];
			}
	}
	return (c);
}
