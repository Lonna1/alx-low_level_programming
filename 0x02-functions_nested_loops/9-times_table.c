#include "main.h"

/**
 * times_table - function that help to print times 9
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar ('0' + y);
			}
		}
		if (z < 10 && y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + z);
			}
			else if (z >= 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			}
	}
	_putchar('\n');
}
