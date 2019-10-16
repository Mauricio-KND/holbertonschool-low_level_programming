#include <stdlib.h>
/**
 * create_array - Creates an array of chars. Initializes it with specific char.
 * @size: Size of array.
 * @c: Array of chars, to initializes.
 *
 * Return: Returns NULL if size = 0. Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
