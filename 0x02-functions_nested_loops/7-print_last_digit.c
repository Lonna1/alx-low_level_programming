#include "main.h"

/**
 * print_last_digit - help to print the last digit of a number
 * _putchar - declaration of _putchar
 * Return: last_digit shows the successful of a program
 */

int print_last_digit(int x)
{
	int last_digit;

	last_digit= x % 10;

	_putchar (last_digit + '0');
	_putchar ('\n');
	return (last_digit);

}

