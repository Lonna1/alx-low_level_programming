#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: this is the pointer of the second array of characters
 * Return: nothing will be returned
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;

	while (x < 8)
	{
		y = 0;

		while (y < 8)

		{

			_putchar (a[x][y]);

			y++;

		}

		_putchar ('\n');
		x++;
	}
}
