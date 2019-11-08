#include "holberton.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Binary number.
 * @index: Content of binary number.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sz;/*Size of binary number*/

	sz = sizeof(*n)/*Value inside pointer*/ * 8 - 1;
	if (index > sz)/*If fails*/
		return (-1);
	*n = ~(1 << index)/*Clean the bit*/ & *n;
	return (1);
}
