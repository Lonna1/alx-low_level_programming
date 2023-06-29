#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: where the result will be stolen.
 * @size_r: size:
 * Return: destination from the pointer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o, p, q, u, s, t;

	for (o = 0; n1[o]; o++)
		;
	for (p = 0; n2[p]; p++)
		;
	if (o > size_r || p > size_r)
		return (0);
	s = 0;
	for (o -= 1, p -= 1, q = 0; q < size_r - 1; o--, p--, q++)
	{
		t = s;
		if (o >= 0)
			t += n1[o] - '0';
		if (p >= 0)
			t += n2[p] - '0';
		if (o < 0 && p < 0 && t == 0)
		{
			break;
		}
		s = t / 10;
		r[q] = t % 10 + '0';
	}
	r[q] = '\0';
	if (o >= 0 || p >= 0 || s)
		return (0);
	for (q -= 1, u = 0; u < q; q--, u++)
	{
		s = r[q];
		r[q] = r[u];
		r[u] = s;
	}
	return (r);

}
