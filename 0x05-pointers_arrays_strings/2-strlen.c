#include "holberton.h"

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

	len = 0;
	{
		while (*(s + len) != '\0');
	}
	return (len);
}
