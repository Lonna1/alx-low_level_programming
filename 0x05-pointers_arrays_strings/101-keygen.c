#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Return: 0 to show the success of the program
 */

int main(void)
{
	int pass[100];
	int i, addition, n;

	addition = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		addition += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - addition) - '0' < 78)
		{
			n = 2772 - addition - '0';
			addition += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
