#include "main.h"
#include <stdio.h>

/**
 * flip_bits - change bits to change a number to one another number
 * @n: number at first
 * @m: number at second
 * Return: bits need to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df;
	int set;

	df = n ^ m;
	set = 0;

	while (df)
	{
		set++;
		df &= (df - 1);
	}

	return (set);
}

