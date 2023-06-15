#include<stdio.h>
#include<unistd.h>

/**
 * main - help to print a program using write function
 * Return: 1 indicates the successfulness of a program
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
