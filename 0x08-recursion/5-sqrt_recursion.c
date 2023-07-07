#include "main.h"

/**
 * sqrt_of_all_numbers - returns the natural square root of a number.
 * @n: number to be inserted.
 * @a: iterator.
 * Return: square root or -1.
 */

int sqrt_of_all_numbers(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + sqrt_of_all_numbers(n, a + 1));
}

/**
 * _sqrt_recursion - libary for returning the natural square root of a number.
 * @n: numbers with which its qrt will be returned
 * Return: -1 if  anumber does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_of_all_numbers(n, 2));
}
