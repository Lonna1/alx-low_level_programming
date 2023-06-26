#include "main.h"

/**
 * _puts - will help to print a string, followed by a new line, to stdout
 * @str: This is a string to be checked
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar (*str + 0);
		str++;
	}
			putchar ('\n');
}

