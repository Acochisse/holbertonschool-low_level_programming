#include "holberton.h"

/**
 * _strspn - gets the len of prefix substring
 * @s: input segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;
	unsigned int b;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		b = 0;
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*(s + i) == *(accept + x))
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return (i);
}
