#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings in memory
 * @s1: first input string
 * @s2: second input string
 *
 * Return: Null for concatencated string
 */

char *str_concat(char *s1, char *s2)

{
	char *p;
	int i;
	int x;
	int y;
	int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	p = malloc(sizeof(char) * i + x + 1);

	if (p == NULL)
		return (NULL);
	for (y = 0; s2[y] != '\0'; y++)
		p[y] = s1[y];
	for (z = 0; s2[z] != '\0'; z++)
		p[y] = s2[z];
	p[x] = '\0';
	return (p);
}
