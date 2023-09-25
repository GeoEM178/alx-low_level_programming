#include "lists.h"

/**
 * reverse_listint - a linked listReverses
 * @head: first nodePointer..
 *
 * Return: first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);
}
