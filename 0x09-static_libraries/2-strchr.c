#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the character s
 * @c: pointer to the character c
 * Return: first occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
