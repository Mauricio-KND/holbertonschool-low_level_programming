#include "holberton.h"

/**
 * _memcpy - copies memory location in src to destination.
 *
 *@dest: Memory area.
 *@src: Memory area.
 *@n: Number of bytes. Unsigned integer.
 *Return: Returns a pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	a = 0;
	while (a < (int)n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
