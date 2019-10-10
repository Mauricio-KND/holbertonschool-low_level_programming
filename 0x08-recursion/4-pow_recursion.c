#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised with y.
 * @x: Base number.
 * @y: Exponent
 *
 * Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
