#include "main.h"
#include <stdio.h>
/**
 * clear_bit - bit value seter
 * @n: pointer to decimal number to change
 * @index: position that will be changed
 * Return: 1 if it worked, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;
	unsigned int st;

	if (index > 64)
		return (-1);
	st = index;
	for (g = 1; st > 0; g *= 2, st--)
		;

	if ((*n >> index) & 1)
		*n -= g;

	return (1);
}
