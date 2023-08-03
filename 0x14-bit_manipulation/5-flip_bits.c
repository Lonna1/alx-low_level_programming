#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n:unsigned long integer
 * @m: unsigned long integers to be fliped from n
 * Return: bits obtained
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var, bits = 0;

	var = n ^ m;

	while (var > 0)
	{
		bits += (var & 1);
		var >>= 1;
	}

	return (bits);
}
