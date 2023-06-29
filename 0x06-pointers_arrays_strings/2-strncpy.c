#include "main.h"

/**
 * _strncpy - function that copies strings
 * @dest: string to the destination
 * @src: string to the source
 * @n: number of bytes from the source
 * Return: destination will be returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
