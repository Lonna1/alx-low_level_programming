#include <stdio.h>

/**
 * _isalpha - shows the entry of a program
 * Retun: 1 shows that the letter is lower or upper case
 * Return: 0 shows that the letter is neither lower or upper case
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
