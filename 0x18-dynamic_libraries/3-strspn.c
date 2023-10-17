#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to a substring
 * @accept: pointer to a substring 2
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 1;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z = 0;
				break;
			}
			y++;
		}
		if (z == 1)
			break;
		x++;
	}

	return (x);
}
