#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: integer to be checked
 * Return: @dest of the prgrm
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';

	return (dest);
}
