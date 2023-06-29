#include "main.h"

/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase
 * @a: character to be checked
 * Return: s which is the answer
 */

char *string_toupper(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
			a[b] = a[b] - 32;
		b++;
	}
	return (a);
}
