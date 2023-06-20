#include <stdio.h>

/**
 * main - Entry point of the program
 * _putchar - declaration of _putchar
 * print_alphabet_x10 - help to print alphabets 10 times in main function
 * Return: 0 shows the successful of a program
 */

void _putchar (char a)
{
	putchar (a);
}
void print_alphabet_x10(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}
