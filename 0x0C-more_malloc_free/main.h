#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

/**
 * error_exit - function that prints error with _putchar
 * and exits with 98
 * Return: Error 98 and exit(98)
 */

int error_exit(void)
{
	char *err;
	int x;

	err = "Error";
	for (x = 0; err[x] != '\0'; x++)
		_putchar(err[x]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - checks if string has only numbers
 * @str: string to be checked
 * Return: 0 is if true 1 if false
 */

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _length - function to get the length of strings
 * @str: pointer to a string to be checked
 * Return: string length
 */

int _length(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
