#include "main.h"

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: pointer to the binary
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{

	int night = 0, x;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[night] != '\0')
		night++;
	night -= 1;
	x = 0;
	while (b[j])
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (non_binary);

		if (b[x] == '1')
			number += (1 * (1 << night));
		x++;

		night--;
	}
	return (number);
}
