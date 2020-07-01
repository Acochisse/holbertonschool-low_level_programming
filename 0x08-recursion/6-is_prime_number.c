#include "holberton.h"

/**
 * is_prime_number - determines if n is prime
 * @n: input value
 *
 *
 * Return: returns 1 if prime, 0 if not
 *
 */

int is_prime_number(int n)

{
	if (n < 3)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - determines if prime
 * @prime: prime equation
 * @n: input
 *
 *
 * Return: 1 if prime, 0 if not
 *
 */

int _prime(int prime, int n)

{
	if (prime == 1)
		return (0);
	else if (n % prime == 0)
		return (1);
	else
		return (_prime(n, prime - 1));
}
