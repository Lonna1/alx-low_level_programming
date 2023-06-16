#include <stdio.h>

/**
 * main - Entry of the program
 * Return: 0 shows the successful of a program
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		if (i != '9')
		{
		putchar (',');
			putchar(' ');
	}
	i++;
	}
	putchar("\n");

	return (0);
}
