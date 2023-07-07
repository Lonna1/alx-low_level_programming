#include "main.h"

/**
 * wildcmp - libary to compare two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the scond string that will contain
 * a * as a special character to replace it.
 * Return: 1 if are identical, and 0 if there are not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
