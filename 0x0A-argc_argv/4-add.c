#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with 2 args
 * @argc: int arg
 * @argv: pointer array arg
 *
 *
 * Return: sum
 */

int main(int argc, char *argv[])

{
	int i;
	int x;
	int val;

	val = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; argv[i][x] != '\0'; x++)
			{
				if (argv[i][x] >= '0' && argv[i][x] <= '9')
				{
					;
				}
				else
				{
				printf("Error\n");
				return (1);
				}
			}
			val += atoi(argv[i]);
		}
		printf("%d\n", val);
	}
	else
		printf("0\n");
	return (0);
}
