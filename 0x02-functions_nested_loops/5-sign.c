#include "main.h"

void _putchar (char a)
{
	putchar (a);
}

/**
 * print_sign - this will help to print the sign
 * Retun: 1 shows that a number is greater than 0
 * Return: 0 shows that a number is equal to 0
 * Return: -1 shows that a number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
