#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be checked
 * Return: 0 to show the successful of the program
 */

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
	return (0);
}
