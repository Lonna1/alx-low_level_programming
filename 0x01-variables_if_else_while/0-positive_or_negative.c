#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - This help in assigning integer n any random number and prints it
 * Return: 0 shows the success of the program
 */

int main(void)

{
	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	printf("%d is positive\n", n);

	else if (n == 0)

	printf("%d is zero\n", n);

	else if (n < 0)

	printf("%d is negative\n", n);

	return (0);

}
