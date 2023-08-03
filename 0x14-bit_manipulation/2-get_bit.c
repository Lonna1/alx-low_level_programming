#include "main.h"

/**
 * get_bit - function that gets bit at index
 * @n: unsigned long integer
 * @index: index within binary number
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bin = n >> index;

	bit = bin & 1;

	return (bit);

}
