#include "lists.h"

/**
 * find_listint_loop - try to find 
 * @head: searching for some
 *
 * Return: result of search i think
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *poor = head;
	listint_t *rich = head;

	if (!head)
		return (NULL);

	while (poor && rich && rich->next)
	{
		rich = rich->next->next;
		poor = poor->next;
		if (rich == poor)
		{
			poor = head;
			while (poor != rich)
			{
				poor = poor->next;
				rich = rich->next;
			}
			return (rich);
		}
	}

	return (NULL);
}
