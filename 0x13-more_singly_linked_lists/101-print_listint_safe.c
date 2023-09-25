#include "lists.h"
/**
 * print_listint_safe - function print list with a const.
 * @head: pointer to the 1st nodeOfThe linkedList
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nom = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	nom = head;
	while (nom)
	{
		printf("[%p] %d\n", (void *)safe, safe->n);
		counter++;
		nom = nom->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (nom == l_n)
			{
				printf("-> [%p] %d\n", (void *)nom, nom->n);
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
