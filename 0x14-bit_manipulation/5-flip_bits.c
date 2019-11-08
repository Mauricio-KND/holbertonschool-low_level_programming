#include "holberton.h"
/**
 * flip_bits - Returns number of bits you need to flip one number to another.
 * @n: First number.
 * @m: Second number
 * Return: Number of bits to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cntr = 0;/*Counter*/
	unsigned long int flp = n ^ m;/*Flipper*/

	while (flp)/*Different of zero*/
	{
		cntr += (flp & 1);/*And of 1*/
		flp >>= 1;
	}

	return (cntr);
}
