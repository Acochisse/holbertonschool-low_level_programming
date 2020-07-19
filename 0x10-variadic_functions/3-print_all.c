#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all cases followed by new line
 * @format: char pointer
 *
 * Return: none
 *
 */

void print_all(const char * const format, ...)

{
	int x;
	char *string;
	char *space;
	va_list ap;

	va_start(ap, format);
	x = 0;

	while (format && format[x])
	{
		space = "";
		if (format[x - 1])
			space = ", ";

		switch (format[x])
		{
		case 's':
			string = va_arg(ap, char *);
			if (!string || !*string)
				string = "(nil)";
			printf("%s%s", str, space);
			break;
		case 'c':
			printf("%c%s", va_arg(ap, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double, space));
			break;
		case 'i':
			printf("%i%s", va_arg(ap, int), space);
			break;
		}
		x++;
	}
	printf("\n");
}
