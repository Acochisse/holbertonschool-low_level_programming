#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* this program takes the last digit of a random number 5>0>6
* Return: 0 (success)
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("last digit of %i is %i ", n, x);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	return (0);
}
