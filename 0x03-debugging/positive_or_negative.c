#include "main.h"
/**
 * positive_or_negative - this will help to print the number which is
 * negative, positive or zero
 * @i: this is the number to be checked
 * Return: 0 shows the success of the program
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is %s", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s", i, "negative");
	}
	else
	{
		printf("%d is %s", i, "zero");
	}
}
