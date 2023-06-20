#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Return: 0 shows the success of the program
 */
int main(void)
{
	unsigned long int x, y, z, u, v, w, a;

	y = 1;
	z = 2;

	printf("%lu", y);

	for (x = 1; x <= 90; x++)
	{
		printf(", %lu", z);
		z = z + y;
		y = z - y;
	}
	u = y / 1000000000;
	v = y % 1000000000;
	w = z / 1000000000;
	a = z % 1000000000;

	for (x = 92; x <= 98; x++)
	{
		printf(", %lu", w + (a / 1000000000));
		printf("%lu", a % 1000000000);
		w = w + u;
		u = w - u;
		a = a + v;
		v = a - v;
	}
	printf("\n");

	return (0);
}
