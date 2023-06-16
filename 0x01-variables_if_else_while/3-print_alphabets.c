#include <stdio.h>

/**
 * main - the entry point of a program
 * Return: 0 shows the successful of a program
 */

int main(void)

{

	int xy;

	for (xy = 'a'; xy <= 'z'; xy++)

	putchar(xy);

	for (xy = 'A'; xy <= 'Z'; xy++)

	putchar(xy);

	putchar('\n');

	return (0);

}
