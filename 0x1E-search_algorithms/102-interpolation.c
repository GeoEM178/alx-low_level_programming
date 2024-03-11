#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pla, min, max;
	double f;

	if (!array)
		return (-1);

	min = 0;
	max = size - 1;

	while (size)
	{
		f = (double)(max - min) / (array[max] - array[min]) * (value - array[min]);
		pla = (size_t)(min + f);
		printf("Value checked array[%d]", (int)pla);

		if (pla >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pla]);
		}

		if (array[pla] == value)
			return ((int)pla);

		if (array[pla] < value)
			min = pla + 1;
		else
			max = pla - 1;

		if (min == max)
			break;
	}

	return (-1);
}
