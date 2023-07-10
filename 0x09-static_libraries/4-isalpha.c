#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to bec checked
 * Return: 1 if c is a letter (lower or uppercase), 0 is neither
 *
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

		return (1);

	else

		return (0);

}
