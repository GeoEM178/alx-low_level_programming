#include "lists.h"

/**
 * print_listint - printsAllElements
 * @h: *h
 *
 * Return: a
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
