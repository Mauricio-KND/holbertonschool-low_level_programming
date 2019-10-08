#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print diagonal sums of two matrix of integers.
 * @a: Pointer to first position of a matrix of integers.
 * @size: Size of matrix of integers.
 */

void print_diagsums(int *a, int size)
{
	int b, c;

	c = 0;
	for (b = 0; b < size; b++, a += size)
	{
		c += *(a + b);
	}
	printf("%d, ", c);

	a -= size;
	c = 0;
	for (b = 0; b < size; b++, a -= size)
	{
		c += *(a + b);
	}
	printf("%d\n", c);
}
