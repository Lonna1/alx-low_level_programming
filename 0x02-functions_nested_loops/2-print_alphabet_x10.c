#include "main.h"

/**
 * print_alphabet_x10 - help to print alphabets 10 times followed by a new line
 */

void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0; x <= 9; x++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
	}
}
