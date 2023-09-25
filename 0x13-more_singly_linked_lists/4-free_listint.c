#include "lists.h"

/**
 * free_listint - a linkedListToBe freed
 * @head: freeing listint_tList
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
