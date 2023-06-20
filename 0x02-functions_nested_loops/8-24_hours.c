#include "main.h"

/**
 * jack_bauer - this will help us in printing every minute
 * Return: 0 shows the successful of a program
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(':');
			_putchar('0' + b / 10);
			_putchar('0' + c % 10);
			_putchar('\n');
		}
	}
}
