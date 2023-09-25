#include "lists.h"

/**
 * sum_listint - calculates all data   (sum)
 * @head: node at the first
 *
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int suming = 0;
	listint_t *temp = head;

	while (temp)
	{
		suming += temp->n;
		temp = temp->next;
	}

	return (suming);
}
