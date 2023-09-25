#include "lists.h"

/**
 * listint_len - returns length
 * @h: listint_t linked list
 *
 * Return: nudes number ...
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
