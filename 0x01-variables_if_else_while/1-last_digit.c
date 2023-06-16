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
	if (n % 10 > 5)
		printf(" Last digit of %d is %d and is greater than 5", n, n % 10);
	else if (n % 10 == 0)
		printf(" Last digit of %d is %d and is 0", n, n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
		printf(" Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	return (0);
}
