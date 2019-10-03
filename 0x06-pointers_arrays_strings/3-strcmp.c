#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: String one to compare.
 * @s2: String two to compare.
 * Return: An integer less than 0 if s1 is found.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] >  s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
