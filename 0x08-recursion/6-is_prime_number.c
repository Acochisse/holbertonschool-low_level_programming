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
	return (_prime(2, n));
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
	if (n % prime == 0 || n > 2)
		return (0);
	else if (n / prime == 1)
		return (1);
	else
		return (_prime(prime + 1, n));
}
