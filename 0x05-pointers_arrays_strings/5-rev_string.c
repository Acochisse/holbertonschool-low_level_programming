#include "holberton.h"

/**
 * rev_string - reverses a pointed string
 * @s: input string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int x;
	int len;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	len = i;
	i--;

	for (x = 0; x < len / 2; x++)
	{
		tmp = s[x];
		s[x] = s[x];
		s[i] = tmp;
		i--;
	}
}
