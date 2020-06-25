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

	for (len = 0; s[len] != '\0'; len++);

	return (len);
}

#include "holberton.h"
/**
* _strcat - Convolves two strings
* @dest: output string
* @src: input string
*
* Return: pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
