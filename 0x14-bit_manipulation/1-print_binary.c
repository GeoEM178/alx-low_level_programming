#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary for an int
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int chng;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, chng = 0; (temp >>= 1) > 0; chng++)
		;

	for (; chng >= 0; chng--)
	{
		if ((n >> chng) & 1)
			printf("1");
		else
			printf("0");
	}
}
