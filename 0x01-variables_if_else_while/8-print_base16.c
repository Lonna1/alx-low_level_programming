#include <stdio.h>
/**
 * main - The entry point of a program
 * Return: 0 shows the successful of a program
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar (i);
	for (i = 'a'; i <= 'f'; i++)
		putchar (i);
	{
		putchar ('\n');
	}
	return (0);
}
