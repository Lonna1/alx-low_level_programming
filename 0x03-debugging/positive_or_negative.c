#include "main.h"
/**
 * positive_or_negative - this will help to print the number which is
 * negative, positive or zero
 * @x: this is the number to be checked
 * Return: 0 shows the success of the program
 */

void positive_or_negative(int x)
{
	if (x > 0)
	{
		printf("%d is %s", x, "positive");
	}
	else if (x < 0)
	{
		printf("%d is %s", x, "negative");
	}
	else
	{
		printf("%d is %s", x, "zero");
	}
}
