#include "main.h"

/**
 * _strcat - This will help in concartanating two strings
 * @dest: the first string to be concartanated
 * @src: the second string to be concartanated
 * Return: This shows the success of the program
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] ; b++)
		dest[a++] = src[b];

	return (dest);
}
