#include "lists.h"

/**
 * add_nodeint - addsNewNodeAtTheBeginning node
 * @head: pointerFor
 * @n: dataTo inserting
 *
 * Return: pointer forNode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
