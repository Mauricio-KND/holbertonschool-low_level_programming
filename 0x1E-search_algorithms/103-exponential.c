#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located. -1 if is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 0, High = 0, Low = 0, Mid = 0, Pow = 1;

	if (!array || size == 0)
		return (-1);
	while (Pow < size && array[Pow] < value)
	{
		printf("Value checked array[%d] = [%d]\n", Pow, array[Pow]);
		Pow *= 2;
	}
	Low = Pow / 2;
	if (Pow >= size)
		High = size - 1;
	else
		High = Pow;
	printf("Value found between indexes [%d] and [%d]\n", Low, High);
	while (High >= Low)
	{
		printf("Searching in array: ");
		for (i = Low; i <= High; i++)
		{
			if (i != Low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		Mid = (High + Low) / 2;
		if (array[Mid] == value)
			return (Mid);
		else if (array[Mid] > value)
			High = Mid - 1;
		else
			Low = Mid + 1;
	}
	return (-1);
}
