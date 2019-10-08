#include "holberton.h"

/**
 * _strspn - Search a string for a set of bytes.
 * @s: String to check.
 * @accept: String to compare.
 *
 * Return: Number of bytes of the s initial segment in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
