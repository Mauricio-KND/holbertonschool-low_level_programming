#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - Searches for an integer.
 *@array: Array of integers to search in.
 *@size: Number of elements inside the array.
 *@cmp: Used to compare values.
 *Return: An integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if ((*cmp)(array[a]) != 0)
			return (a);
	}
	return (-1);
}
