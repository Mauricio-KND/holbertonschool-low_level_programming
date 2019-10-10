#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Integer to take factorial.
 *
 * Return: Factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
