#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int *fill_array_range(int *p, int min, int max);
/**
 * array_range - Creates an array of integers.
 * @min: Integer with a value.
 * @max: Integer with value.
 * Return: Pointer to the newly created array. NULL min > max. If malloc fails.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int length;
	int index = 0;
	int num = min;

	if (min > max)
		return (NULL);

	length  = (max - min) + 1;

	new_array = malloc(length * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	while (num <= max)
	{
		new_array[index] = num;
		index++;
		num++;
	}

	return (new_array);
}
