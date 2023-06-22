#include "main.h"

/**
 * print_numbers - help to print numbers from 0 to 9
 * Return: alwasys shows the success of the program
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar (a + '0');
	}
	_putchar ('\n');
	return (0);
}
