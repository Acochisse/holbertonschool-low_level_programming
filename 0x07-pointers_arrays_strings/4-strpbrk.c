#include "holberton.h"

/**
 * strpbrk - searches a string of any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer to byte in s that matches
 *
 */

char *_strpbrk(char *s, char *accept)

{
	int i;
	int x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (s + i);
		}
	}
	return ('\0');
}
