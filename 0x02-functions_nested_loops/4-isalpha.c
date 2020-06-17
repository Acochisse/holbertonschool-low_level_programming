#include "holberton.h"

/**
 * _islower - checks if a..z or not
 *@c: character to be checked against
 * Return: 0 (Success)
 */
int _islower(int c)
{
	int is_uppercase;

	if (c >= 'A' && c <= 'Z')
		is_uppercase = 1;
	else
		is_uppercase = 0;
	return (is_uppercase);
}
