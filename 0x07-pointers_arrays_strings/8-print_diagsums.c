#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a pointer on the input
 * @size: matrix size to be checked
 * Return: 0 to show success
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			x = x + a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			y = y + a[i];
	}
	printf("%d, %d\n", x, y);
	return (0);
}
