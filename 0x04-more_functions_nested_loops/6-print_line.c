#include "main.h"

/**
 * print_line - this will help us to draw a straight line in the terminal
 * @n: it is the number to be checked
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
