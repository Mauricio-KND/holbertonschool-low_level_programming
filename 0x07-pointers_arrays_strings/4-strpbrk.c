#include "holberton.h"

/**
 * _strpbrk - Locates the first occurrence in the string s.
 * @s: String to check
 * @accept: String to compare.
 *
 * Return: A pointer to the byte in s that matches, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (0);
}
