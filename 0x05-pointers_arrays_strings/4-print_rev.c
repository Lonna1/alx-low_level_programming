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

	for (reverse = 0; s[reverse] != '\0'; ++reverse)

	for (reverse--; reverse >= 0; reverse--)
		_putchar(s[reverse]);
	_putchar('\n');
}
