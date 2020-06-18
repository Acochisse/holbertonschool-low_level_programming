#include "holberton.h"

/**
 * _isdigit - checks to see if c = b10
 * @c: character to be checked
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
