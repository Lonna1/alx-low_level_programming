#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte to be set
 * @n: number of bytes to be filled
 * Return: s will be returned
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
