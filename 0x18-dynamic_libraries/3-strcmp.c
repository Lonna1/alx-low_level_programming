#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: first string
 * @s2: second string
 * Return: b which is the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++;
	}
	return (b);
}
