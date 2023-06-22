#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the entry point of the program
 * Fizz is printerd when a number is a multiple of 3
 * Buzz is printed when a number is a multiple of 5
 * FizzBuzz is printed when a number is a multiple of both
 * Return: 0 shows the success of the program
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}

	printf("\n");

	return (0);
}
