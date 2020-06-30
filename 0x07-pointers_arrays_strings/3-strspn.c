#include "holberton.h"

/**
 * _strspn - returns number of accepted bytes
 * @s: input string
 * @accept: chars to accept
 *
 * Return: number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;
	int x;
	int t;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				t = 1;
		}
		x = 0;
		if (t == 0)
			break;
		count++;
		i++;
	}
	return (i);
}
