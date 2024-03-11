#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *
 * @array: given array
 * @size: size of the array
 * @value: value to search with
 * Return: index_num
 */
int jump_search(int *array, size_t size, int value)
{
	int index_num, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index_num = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index_num, array[index_num]);

		if (array[index_num] == value)
			return (index_num);
		k++;
		prev = index_num;
		index_num = k * m;
	} while (index_num < (int)size && array[index_num] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index_num);

	for (; prev <= index_num && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
