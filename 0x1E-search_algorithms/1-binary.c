#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: given array
 * @size: size of an array
 * @value: value to search for
 * Return: index to the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half_the_size = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half_the_size && size % 2 == 0)
		half_the_size--;

	if (value == array[half_the_size])
		return ((int)half_the_size);

	if (value < array[half_the_size])
		return (recursive_search(array, half_the_size, value));

	half_the_size++;

	return (recursive_search(array + half_the_size, size - half_the_size, value) + half_the_size);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index_number
 */
int binary_search(int *array, size_t size, int value)
{
	int index_number;

	index_number = recursive_search(array, size, value);

	if (index_number >= 0 && array[index_number] != value)
		return (-1);

	return (index_number);
}
