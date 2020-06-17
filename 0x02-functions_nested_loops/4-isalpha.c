#include "holberton.h"

/**
 * _isalpha - checks if a..z or not
 *@c: character to be checked against
 * Return: 1 if alpha, if not 0
 */
int _isalpha(int c)
{
	int is_alpha;

	if (c >= 'A' && c <= 'Z')
		is_alpha = 1;

	else if (c >= 'a' && c <= 'z')

	else
		is_alpha = 0;

	return (is_alpha);
}
