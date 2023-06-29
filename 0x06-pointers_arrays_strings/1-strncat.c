#include "main.h"

/**
 * _strncat - This will help to concartanate two strings
 * @dest: The first string
 * @src: The second string
 * @n: bytese from src string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; i++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
