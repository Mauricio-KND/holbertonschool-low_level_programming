#include "hash_tables.h"
/**
 *key_index - gives the index of a key.
 *@key: The key.
 *@size: Size of the array of the hash table.
 *Return: Index at which the value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
