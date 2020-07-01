#include "holberton.h"

/**
 * _strlen_recursion - returns length of pointed string
 * @s: input string
 *
 *
 *
 * Return: strlen(s)
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
