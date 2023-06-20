#include <stdio.h>
#include <stdlib.h>
/**
 * main - help to print the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 shows the success of the program
 */
int main(void)
{
	long int x, y, z, another;

	y = 1;

	z = 2;

	for (x = 1; x <= 50; x++)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		} else
		{
			printf("%ld\n", y);
		}
		another = y + z;
		y = z;
		z = another;
	}
	return (0);
}
