#include "main.h"

/**
 * puts2 - help in the program execution
 * @str: this is a character to be checked.
 */

void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar (str[x]);
	}
	_putchar ('\n');
}
