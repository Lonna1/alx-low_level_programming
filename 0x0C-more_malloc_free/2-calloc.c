#include <stdlib.h>

/**
 * _memset -function that fills memory with a constant byte
 * @s: pointer that represents memory block to fill
 * @b: character to be checked
 * @n: number of bytes to be filled
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: size of an element
 * Return: pointer with new allocated memory
 *         or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);

	_memset(y, 0, nmemb * size);

	return (y);
}
