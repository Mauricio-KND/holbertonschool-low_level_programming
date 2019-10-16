#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new duplicate of the string str.
 *
 * @str: String to duplicate.
 *
 * Return: Pointer to duplicated string. NULL if insufficient memory available.
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *strng;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	a++;
	strng = malloc(a * sizeof(char));
	if (strng == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		strng[b] = str[b];
	}
	return (strng);
}
