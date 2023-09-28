#include "main.h"

/**
 * set_bit - value seter
 * @n: pointer value
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int prr;

	if (index > 64)
		return (-1);

	for (prr = 1; index > 0; index--, prr *= 2)
		;
	*n += prr;

	return (1);
}
