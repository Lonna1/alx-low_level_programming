#include "main.h"

/**
 * _strcpy - help in copying a string
 * @dest: character for destination
 * @src: character for source
 * Return: the resultwill bereturned to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
