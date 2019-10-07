#include "holberton.h"

/**
 * _strchr - Locate character in string.
 *
 *@s: String.
 *@c: Character.
 *Return: Returns a pointer to the first occurrence of c, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (s[a] == c)
		return (s + a);
	return ('\0');
}
