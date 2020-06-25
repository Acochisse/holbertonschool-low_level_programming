/**
* _strlen - return length string
* @s: target string
*
* Return: length value
*
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}


#include "holberton.h"

/**
*_strncpy - copies string
*@src:  Pointer to input string
*@dest: Pointer to output string
*@n: Bytesize of src
*
* Return: Pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;
	int lensrc = _strlen(src);

	for (i = 0; i <= n; i++)
	{
		if (i >= lensrc)

			dest[i] = '\0';

		else

			dest[i] = src[i];
	}
	return (dest);
}
