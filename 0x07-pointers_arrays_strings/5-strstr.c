#include "holberton.h"

/**
 * _strstr - Locate a substring.
 * @haystack: String to check.
 * @needle: Substring to check.
 *
 * Return: Pointer to beginning of substring. NULL if substring isn't found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
