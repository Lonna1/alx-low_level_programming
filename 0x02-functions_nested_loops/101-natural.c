#include <stdio.h>
#include <stdlib.h>

/**
 * main - help to print the multiples sum
 * Return: 0 shows the successfull of a program
 */
int main(void)
{
	unsigned long int x, y, addition;
	int i;

	x = 0;
	y = 0;
	addition = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			x = x + i;
		} else if ((i % 5) == 0)
		{
			y = y + i;
		}
	}
	addition = x + y;
	printf("%lu\n", addition);
	return (0);
}
