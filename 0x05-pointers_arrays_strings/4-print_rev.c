#include "main.h"

/**
 * print_rev - This will help us to print reverse string
 * @s: string to be checked
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
