#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with 2 arg
 * @argc: int arg
 * @argv: pointer array arg
 *
 * Return: 1
 */

int main(int argc, char *argv[])

{
	int balance;

	if (argc == 3)
	{
		balance = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", balance);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
