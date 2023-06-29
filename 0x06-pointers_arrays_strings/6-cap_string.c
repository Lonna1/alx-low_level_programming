#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: character to be checked
 * Return: a which is the answer
 */

char *cap_string(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			if (b == 0)
			{
				a[b] -= 32;
			}
			if (a[b - 1] == 32 || a[b - 1] == 9 || a[b - 1] == 10 ||
					a[b - 1] == 44 || a[b - 1] == 59 || a[b - 1] == 46 ||
					a[b - 1] == 33 || a[b - 1] == 63 || a[b - 1] == 34 ||
					a[b - 1] == 40 || a[b - 1] == 41 || a[b - 1] == 123 ||
					a[b - 1] == 124)
			{
				a[b] -= 32;
			}
		}
		b++;
	}
	return (a);
}
