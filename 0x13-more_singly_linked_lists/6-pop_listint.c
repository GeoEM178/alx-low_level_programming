#include "lists.h"

/**
 * pop_listint -delete nodeAtThe head
 * @head: pointer forN
 *
 * Return: deleted c
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int c;

	if (!head || !*head)
		return (0);

	c = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (c);
}
