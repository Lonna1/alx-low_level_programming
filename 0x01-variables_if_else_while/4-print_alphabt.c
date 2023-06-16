#include <stdio.h>

/**
 * main - This is the entry point of a program
 * Return: 0 shows the success of a program
 */

int main(void)
{
	char xy = 'a';

	while (xy <= 'z')
	{
		if (xy != 'e' && xy != 'q')
		{
			putchar(xy);
		}

		xy++;
	}
		putchar('\n');

	return (0);
}
