#include "main.h"

/**
 * factorial - library to print factorial
 * @n: number for factorial to be printed
 * Return: -1 if n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
