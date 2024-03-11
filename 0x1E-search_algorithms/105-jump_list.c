#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searching
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index_num
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index_num, k, m;
	listint_t *back;

	if (!list || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index_num = 0;
	k = 0;

	do {
		back = list;
		k++;
		index_num = k * m;

		while (list->next && list->index_num < index_num)
			list = list->next;

		if (list->next == NULL && index_num != list->index_num)
			index_num = list->index_num;

		printf("Value checked at index [%d] = [%d]\n", (int)index_num, list->n);

	} while (index_num < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)back->index_num, (int)list->index_num);

	for (; back && back->index_num <= list->index_num; back = back->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)back->index_num, back->n);
		if (back->n == value)
			return (back);
	}

	return (NULL);
}
