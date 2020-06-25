#include "holberton.h"

/**
* rot13 - uses rot13 to encode input string
*@s: input string
*
*Return: c
*/

char *rot13(char *s)

{
	int i;
	int r;

	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{

		for (r = 0; x[r] != '\0'; r++)
		{
			if (s[i] == x[r])
			{
				s[i] = y[r];
				break;
			}
		}
	}
	return (s);
}
