#include <stdio.h>

/**
 * main -This is the program Entry point
 * Return: 0 indicates the successful of a program
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			int z = x / 10;
			int u = x % 10;
			int v = y / 10;
			int w = y % 10;

			putchar (z + '0');
			putchar (u + '0');
			putchar (' ');
			putchar (v + '0');
			putchar (w + '0');
			if (x <= 97 || y <= 98)
			{
				putchar (',');
				putchar (' ');
			}}}
	putchar ('\n');
	return (0);
}
