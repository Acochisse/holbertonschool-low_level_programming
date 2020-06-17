#include "holberton.h"

/**
 * _islower - checks if a..z or not
 *@c: character to be checked against
 * Return: 0 (Success)
 */
int _islower(int c)
{
	int is_lowercase;

	if (c >= 'a' && c <= 'z')
		is_lowercase = 1;
	else
		is lowercase = 0;
	return (is lowercase);
}
