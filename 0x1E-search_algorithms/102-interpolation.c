#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located. -1 if is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t Low = 0, High = size - 1, Pos;

	if (!array || size == 0)
		return (-1);
	while (Low <= High)
	{
		if (Low == High)
		{
			if (array[High] == value)
				return (High);
			return (-1);
		}
		Pos = Low + (((double)(High - Low) /
			      (array[High] - array[Low])) * (value - array[Low]));

		if (Pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", Pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", Pos, array[Pos]);
		if (array[Pos] == value)
			return (Pos);

		if (array[Pos] < value)
			Low = Pos + 1;
		else
			High = Pos - 1;
	}
	return (-1);
}
