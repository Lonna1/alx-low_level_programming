#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 indicates the successful of the program
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar (x + '0');
			putchar (y + '0');
			if (x <= 7 || y <= 8)
			{
				putchar (',');
					putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);

}
