#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @a: string to be encoded
 * Return: a to show the successful of the program
 */

char *rot13(char *a)
{
	int b;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == data1[c])
			{
				a[b] = datarot[c];
				break;
			}
		}
	}
	return (a);
}
