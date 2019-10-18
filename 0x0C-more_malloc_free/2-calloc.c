#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for array of nmemb elements of size bytes each.
 * @nmemb: Array with a specific size to alocates.
 * @size: Size in bytes of elements.
 * Return: Pointer to allocated memory. NULL if nmemb or size 0. malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Pointer = malloc(nmemb * size);
	if (Pointer == NULL)
		return (NULL);
	for (Pointer = 0; i < (nmemb * size); i++)
		Pointer[i] = 0;
	return (Pointer);
}
