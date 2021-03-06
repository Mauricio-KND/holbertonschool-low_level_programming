#include "holberton.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Binary number.
 * @index: Index with bits.
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)/*To obtain number of bits*/
		return (-1);
	return ((n >> index) & 1);/*Shift left index times. Get bit(&1) */
}
