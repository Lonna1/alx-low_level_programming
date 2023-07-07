#include "main.h"

/**
 * is_it_prime - help to findout if an inserted number is a prime.
 * @n: inserted number.
 * @a: iterator.
 * Return: 1 if n is a prime number.
 * and 0 if n is not a prime number.
 */

int is_it_prime(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + is_it_prime(n, a + 1));
}

/**
 * is_prime_number - findout if an inserted number is a prime or not.
 * @n: inserted number.
 * Return: 1 if n is a prime number
 * and 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_it_prime(n, 2));
}
