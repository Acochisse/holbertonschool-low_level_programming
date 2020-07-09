#include "holberton.h"

/**
 * _strlen - finds the length of string
 * @s: input string
 *
 * Return: length of string
 *
 */

int _strlen(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatencates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: input num
 *
 * Return: return new string with num passed from s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *nstr;
	char *empty = "";
	unsigned int i;
	unsigned int x;
	unsigned int str1 = 0;
	unsigned int str2 = 0;

	if (s1 == NULL)
		s1 = empty;
	else
		str1 = _strlen(s1);
	if (s2 == NULL)
		s2 = empty;
	else
		str2 = _strlen(s2);
	if (n >= str2)
		n = str2;
	nstr = malloc((str1 * sizeof(char)) + n + 1);
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		nstr[i] = s1[i];
	if (str2 < n)
	{
		for (x = 0; s2[x] != '\0'; x++)
			nstr[i] = s2[x];
	}
	else
	{
		for (x = 0; x < n; x++, i++)
			nstr[i] = s2[x];
	}
	nstr[i] = '\0';
	return (nstr);
}
