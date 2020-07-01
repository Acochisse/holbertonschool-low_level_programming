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


/**
 * helper_palindrome - tests conditions
 * @s: input string
 * @length: length of s
 * Return: string
 *
 */

int helper_palindrome(char *s, int length)
{
	if (length <= 1)

		return (1);

	else if (*s == *(s + length - 1))

		return (helper_palindrome(s + 1, length - 2));

	else
		return (0);
}

/**
 * is_palindrome - verifies if string is palindrome
 * @s: input string
 *
 *
 * Return: nothing
 *
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
		return (1);

	return (helper_palindrome(s, length));
}
