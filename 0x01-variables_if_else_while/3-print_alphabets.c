#include <stdio.h>

/**
 * main - the entry point of a program
 * Return: 0 shows the successful of a program
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	putchar(b);
	for (b = 'A'; b <= 'Z'; b++)
	putchar(b);
	{
		putchar("\n");
	}
	return (0);
}
