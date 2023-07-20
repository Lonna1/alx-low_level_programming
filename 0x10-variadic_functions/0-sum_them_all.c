#include <stdarg.h>

/**
 * sum_them_all - function that adds all its parameters
 * @n: number to be checked
 * Return: Sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	va_start(ap, n);

	for (param = 0; param < n; param++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
