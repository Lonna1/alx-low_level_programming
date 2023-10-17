#include "main.h"

/**
 * _isalpha - checks for alphabetic character either small or upper
 * @c: the character to be checked by the program
 * Return: 1 shows the success of the function else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
