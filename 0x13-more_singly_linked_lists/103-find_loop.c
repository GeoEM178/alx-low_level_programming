#include "lists.h"

/**
 * find_listint_loop - ..................... ........... ..
 * @head: search ... .. for
 *
 * Return: .. ... 
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slwo = head;
	listint_t *go = head;

	if (!head)
		return (NULL);

	while (slwo && go && go->next)
	{
		go = go->next->next;
		slwo = slwo->next;
		if (go == slwo)
		{
			slwo = head;
			while (slwo != go)
			{
				slwo = slwo->next;
				go = go->next;
			}
			return (go);
		}
	}

	return (NULL);
}
