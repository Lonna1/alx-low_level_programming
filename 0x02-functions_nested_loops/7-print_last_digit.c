#include "main.h"

/**
 * print_last_digit - help to print the last digit of a number
 * @x: help to check the program
 * Return: last_digit shows the successful of a program
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;
	_putchar(y + '0');

	return (y);
}
