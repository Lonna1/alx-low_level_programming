#include "main.h"

/**
 * _islower - declaration of a prototype
 * Return: 1 indicates that c is lowercase
 * Return: 0 shows the successs of the program
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
else
{
	return (0);
}
}
