#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: input pointer that represents memory block  to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array using memset
 * @nmemb: size of array
 * @size: size of elements
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * multiply - function that initialize array with 0 byte
 * @s1:pointer to the first string
 * @s2: pointer to the second string
 */

void multiply(char *s1, char *s2)
{
	int x, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (x = 0; x < total_l; x++)
		printf("%i", ptr[x]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point of the program
 * that multiplies two entries
 * @argc: number of arguments
 * @argv: arguments of array
 * Return: 0 on success 98 when fails
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
