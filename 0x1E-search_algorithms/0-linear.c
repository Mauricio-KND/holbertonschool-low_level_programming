#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located. -1 if not or NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while ((size_t) i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
