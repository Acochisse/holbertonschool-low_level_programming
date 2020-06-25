#include "holberton.h"

/**
 *string_toupper - converts input to capital
 *@c: input string
 *
 *Return: char
 */

char *string_toupper(char *c)


{
	int i;
	const int ASCII_DIF = 32;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - ASCII_DIF;

	return (c);
}
