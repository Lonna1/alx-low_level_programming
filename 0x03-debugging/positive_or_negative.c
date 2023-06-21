include "main.h"
/**
 * positive_or_negative - help in showing if the number is
 * positive, negative or zero
 * @x: this is the number to be checked
 * Return: 0 shows the success of the program
 */

void positive_or_negative(int x)
{
	if (x > 0)
	{
		printf("%d is %s\n", x, "positive");
	}
	else if (x < 0)
	{
		printf("%d is %s\n", x, "negative");
	}
	else
	{
		printf("%d is %s\n", x, "zero");
	}
	return (0);
}
