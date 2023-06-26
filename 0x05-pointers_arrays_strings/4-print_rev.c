#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int reverse;

	while (s[reverse])
		reverse++;
	while (reverse--)
		putchar (s[reverse]);
	putchar ('\n');
}
