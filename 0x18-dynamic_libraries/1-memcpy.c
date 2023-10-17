#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: bytes number in a memory
 * Return: dest of the the memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
