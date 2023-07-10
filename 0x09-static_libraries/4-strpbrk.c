#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: pointer to ac character to be checked
 * @accept: pointer to accpeting string
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; accept[y] != '\0'; y++)
			if (s[x] == accept[y])
				goto exit;
exit: return (s[x] != '\0' ? s + x : '\0');
}
