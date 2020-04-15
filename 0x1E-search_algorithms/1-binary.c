#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where value is located.-1 if value is not present or NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, low = 0, high = size - 1;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		j = (low + high) / 2;
		if (array[j] == value)
			return ((int)j);
		else if (array[j] > value)
			high = j - 1;
		else
			low = j + 1;
	}
	return (-1);
}
