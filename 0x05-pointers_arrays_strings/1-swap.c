#include "main.h"

/**
 * swap_int - Function that help us to swap the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
