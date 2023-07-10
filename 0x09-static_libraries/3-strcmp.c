#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1:pointer to the first string
 * @s2: pointer to the second string
 * Return: 0 if s1 and s2 are equal
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			y = s1[x] - s2[x];
			break;
		}
		else
		{
			y = s1[x] - s2[x];
		}
		x++;
	}

	return (y);
}
