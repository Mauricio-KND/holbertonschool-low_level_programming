#include "holberton.h"

/**
 * _strncat - Concatenates one string (the number of byte given)
 * to another.
 * @dest: Where to concatenate.
 * @src: String to concatenate.
 * @n: How many bytes to.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
