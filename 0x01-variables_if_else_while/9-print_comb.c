#include <stdio.h>

/**
 * main - Entry of the program
 * Return: 0 shows the successful of a program
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar (c);
		if (c != '9')
		{
		putchar (',');
			putchar(' ');
	}
	c++;
	}
	putchar('\n');

	return (0);
}
