#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a string
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * char_comparator - libray that compares all the string characters
 * @s: pointer to a string
 * @n1: smaller iterator.
 * @n2: bigger iterator.
 * Return: the result
 */

int char_comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + char_comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - findout if a string is a palindrome.
 * @s: pointer to a string.
 * Return: 1 if s is a palindrome
 * and 0 if it is not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (char_comparator(s, 0, _strlen_recursion(s) - 1));
}
