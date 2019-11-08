#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to binary representation.
 */
void print_binary(unsigned long int n)
{
	if (n < 2)/*First condition print 0 and 1*/
	{
		_putchar(n + '0');/*ASCII to number*/
		return;
	}
	print_binary(n >> 1);/*Recursion. Divided by 2*/
	_putchar((n & 1) + '0');
}
