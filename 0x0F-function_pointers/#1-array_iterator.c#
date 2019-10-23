#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - Executes function given as parameter on array's element.
 *@array: Array with elements.
 *@size: Array's size.
 *@action: Pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;
	for (a = 0; a < size; a++)
		(*action)(array[a]);
}
