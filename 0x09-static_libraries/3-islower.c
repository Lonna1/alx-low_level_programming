#include "main.h"







/**
 * _islower - a function that checks for lowercase character
 * @c: integer to be checked
 * Return: 1 if int c is lowercase, 0 if it is not
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
