#include "main.h"

/**
 * main - Entry point of the program
 * print_alphabet - function name to be called by main
 * Return: 0 shows the successful of a program
 */
void _putchar (char a)
{
	putchar (a);
}
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar (c);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
