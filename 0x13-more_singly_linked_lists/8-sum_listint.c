#include "lists.h"

/**
 * sum_listint - calculates all data   (add)
 * @head: node atTheFirstI
 *
 * Return: result add
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
