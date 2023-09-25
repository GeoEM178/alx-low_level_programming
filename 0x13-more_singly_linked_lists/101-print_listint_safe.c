#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *safe = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	safe = head;
	while (safe)
	{
		printf("[%p] %d\n", (void *)safe, safe->n);
		counter++;
		safe = safe->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (safe == l_n)
			{
				printf("-> [%p] %d\n", (void *)safe, safe->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
