#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup -returns a pointer to targeted memory address
 * @str: target string
 *
 *
 *
 *
 * Return: pointer
 *
 */

char *_strdup(char *str)

{
	int i;
	int x;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		p[x] = str[x];
	p[x] = '\0';
	return (p);
}
