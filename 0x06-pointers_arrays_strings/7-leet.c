#include "main.h"

/**
 * leet - function that encodes a string
 * @a: string to be encoded
 * Return: a which is the answer
 */

char *leet(char *a)
{
	int b, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (a[c] != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (a[c] == sl[b] || a[c] == ul[b])
			{
				a[c] = n[b];
				break;
			}
		}
		c++;
	}
	return (a);
}
