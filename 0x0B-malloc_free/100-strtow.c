#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - splits strings to words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	char **array;
	int i, j, count, strlen, k;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			count++;
	}
	i = 0;
	array = malloc(count * sizeof(char *));
	for (i = 0; str[i] !=  '\0' && j < count; i++)
	{
		strlen = 0;
		while (str[i] != ' ')
		{
			strlen++;
			i++;
		}
		if (strlen > 0)
		{
			array[j] = malloc((strlen - 1) * sizeof(char *));
			for (k = 0; k < strlen ; k++, i++)
			{
				array[j][k] = str[i - strlen];
			}
			i = i - strlen - 1;
			j++;
		}
		array[j] = '\0';
	}
	return (array);
}
