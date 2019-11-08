#include "holberton.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number to set bit.
 * @index: Index to set bit.
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sz;/*Size of binary number*/

	sz = sizeof(*n) * 8 - 1;
	if (index > sz)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
