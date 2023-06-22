#include "main.h"

/**
 * print_square - this will help us to print a sqaure
 * @size: this is the size of the square we will print
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
