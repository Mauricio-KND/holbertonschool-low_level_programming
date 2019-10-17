#include <stdlib.h>
/**
 * malloc_checked - Allocates memory.
 * @b: Size of memory to alocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *Pointer;

	Pointer = malloc(b);
	if (Pointer == NULL)
		exit(98);
	return (Pointer);
}
