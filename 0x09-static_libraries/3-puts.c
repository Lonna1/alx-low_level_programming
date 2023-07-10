#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: pointer to a string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
