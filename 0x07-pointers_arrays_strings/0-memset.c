#include "holberton.h"

/**
 * _memset - fill memory with a constant byte.
 * @s: Pointer.
 * @b: Constant byte that fills.
 * @n: Unsigned integer.
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
