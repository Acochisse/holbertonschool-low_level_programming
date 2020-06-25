#include "holberton.h"

/**
* cap_string - capitalizes all the words in string
* @c: pointer to input string
*
* Return: pointer to dest (c)
*/

char *cap_string(char *c)


{

	int i;
	int x;
	
	char a[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; c[i] != '\0'; i++)
	{

		for (x = 0; x < 13; x++)
		{

		if ((c[i] == a[x]) && c[i + 1] >= 97 && c[i + 1] <= 122)
			c[i + 1] -= 32;

		if (c[0] >= 97 && c[0] <= 122)
			c[0] -= 32;

		}

	}
	return (c);
}
