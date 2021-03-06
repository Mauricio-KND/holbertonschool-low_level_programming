#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - Prints a name.
 *@name: A name (string of characters).
 *@f: Prints a name (function pointer).
 *Return: Void. Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
