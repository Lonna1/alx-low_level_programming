#include "main.h"

/**
 * _pow_recursion - libray for returning the value of x
 * raised to the power of y
 * @x: the first value to be returned
 * @y: the second value to be returned
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
