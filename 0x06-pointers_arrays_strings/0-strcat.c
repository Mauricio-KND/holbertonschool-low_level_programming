#include "holberton.h"

/**
 * _strcat - concatenate strings, src appended to destination.
 *
 * @dest: Destination string.
 * @src: Source string.
 * Return: Returns finished string.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
dest[i++] = src[j++];
dest[i] = '\0';
return (dest);
}
