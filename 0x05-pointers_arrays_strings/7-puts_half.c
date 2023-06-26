#include "main.h"

/**
 * puts_half - help to print half of a string
 * @str: character to be checked
 */

void puts_half(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	if (y % 2 == 1)
	{
		x = (y - 1) / 2;
		x += 1;
	}
	else
	{
		x = y / 2;
	}
	for (; x < y; x++)
	{
		_putchar (str[x]);
	}
	_putchar ('\n');
}
