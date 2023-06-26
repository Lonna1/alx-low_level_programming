#include "main.h"

/**
 * print_array - help in printing array elements
 * @a: row 0 of the array
 * @n: row 1 of the array
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
