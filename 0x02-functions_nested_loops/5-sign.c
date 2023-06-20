#include "main.h"

/**
 * print_sign - this will help to print the sign
 * @n: will be checked by the program
 * Return: 1 greater than 0,
 * 0 equal to 0 and
 * -1 less than 0
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
