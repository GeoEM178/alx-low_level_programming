#include "lists.h"

/**
 * listint_len - b returns length
 * @h: listint_t linked list b
 *
 * Return: nudesNumber b
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);
}
