#include "main.h"
#include <stdio.h>
/**
 * get_bit - bit value
 * @n: get num
 * @index: index starting from 0, of the bit we want to get
 * Return: bit, or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int wat;

	if (index > 64)
		return (-1);

	wat = n >> index;

	return (wat & 1);
}
