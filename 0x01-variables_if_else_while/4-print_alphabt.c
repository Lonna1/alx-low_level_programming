#include <stdio.h>

/**
 * main - This is the entry point of a program
 * Return: 0 shows the success of a program
 */

int main(void)
{
	int b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
			putchar(b);
		{
			b++;
		}
		putchar('\n');
	}
	return (0);
}
