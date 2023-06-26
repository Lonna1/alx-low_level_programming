#include "main.h"

/**
 * _puts - will help to print a string, followed by a new line, to stdout
 * @str: This is a string to be checked
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
			_putchar ('\n');
}

