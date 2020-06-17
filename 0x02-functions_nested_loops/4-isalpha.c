#include "holberton.h"

/**
 * _isalpha - checks if a..z or not
 *@c: character to be checked against
 * Return: 1 if alpha, if not 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
