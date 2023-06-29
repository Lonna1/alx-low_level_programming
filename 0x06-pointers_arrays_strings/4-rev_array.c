#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: integers pointer
 * @n: integers to be reversed
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;

	while (c < d)
	{
		b = a[c];
		a[c] = a[d];
		a[d] = b;
		c++;
		d--;
	}
}
