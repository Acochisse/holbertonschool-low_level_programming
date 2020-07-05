#include <stdio.h>

/**
 * main - function with two arguments
 * @argc: int arg
 * @argv: pointer array arg
 *
 * Description: prints all args
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
