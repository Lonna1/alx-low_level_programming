#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @a: The character to print
 * Return: 1 after running successful.
 * On error, -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
