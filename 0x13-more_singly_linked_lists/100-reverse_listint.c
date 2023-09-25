#include "lists.h"

/**
 * reverse_listint - a linked list reverses
 * @head: first node pointerr
 *
 * Return: first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevus = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevus;
		prevus = *head;
		*head = next;
	}

	*head = prevus;

	return (*head);
}
