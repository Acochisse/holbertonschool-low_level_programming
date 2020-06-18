#include "holberton.h"

/**
 * _isupper - determines if a character is uppercase
 *@c: character to be checked
 * Return: value
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
