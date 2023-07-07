#include "main.h"

/**
 * _strlen_recursion - library that  returns the length of a string
 * @s: pointer to a string to be returned
 * Return: s which is the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
