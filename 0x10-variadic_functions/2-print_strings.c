#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: char pointer
 * @n: unsigned int
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list ap;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
