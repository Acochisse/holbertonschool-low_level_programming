#include "holberton.h"

/**
 * _strchr - locates a char within a string
 * @s: source string
 * @c: target character
 * Return: pointer to first instance of character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
