#include <stdio.h>
#include <stdlib.h>

/**
 * main - this help in finding and printing even-valued terms sum
 * Return: 0 indicates the success of the program
 */
int main(void)
{
	int x;
	unsigned long int y, z, another, addition;

	y = 1;
	z = 2;
	addition = 0;

	for (x = 1; x <= 33; x++)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			addition = addition + y;
		}
		another = y + z;
		y = z;
		z = another;
	}
	printf("%lu\n", addition);
	return (0);
}
