#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int x;
	int r;
	int sum;
	char array[63] = "abcdefghijkmnopqrstuwvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	x = 0;
	while (sum < (1440 -122))
	{
		r = rand() % 62;
		password[x] = array[r];
		sum = sum + password[x];
		x++;
	}
	r = 1440 - sum;
	password[x] = r;
	x++;
	password[x] = '\0';
	printf("%s", password);

	return (0);
}
