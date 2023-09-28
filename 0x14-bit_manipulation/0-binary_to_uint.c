#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary to usi
 * @b: string of chars
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int summing, pwr;
	int tol;

	if (b == NULL)
		return (0);

	for (tol = 0; b[tol]; tol++)
	{
		if (b[tol] != '0' && b[tol] != '1')
			return (0);
	}

	for (pwr = 1, summing = 0, tol--; tol >= 0; tol--, pwr *= 2)
	{
		if (b[tol] == '1')
			summing += pwr;
	}

	return (summing);
}
