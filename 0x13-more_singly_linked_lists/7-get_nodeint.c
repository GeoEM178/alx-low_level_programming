#include "lists.h"

/**
 * get_nodeint_at_index - returns theNodeAt a specificIndex
 * @head: node at theFirstI
 * @index: index of the nodeI
 *
 * Return: pointer to the nodeAtThe index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
