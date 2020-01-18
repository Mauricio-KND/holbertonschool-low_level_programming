#include "hash_tables.h"
/**
 *hash_table_create - Creates a hash table.
 *@size: Size of the array.
 *Retun: A pointer to the newly created hash table. If fails NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewHashTable;

	NewHashTable = malloc(sizeof(hash_table_t));
	if (NewHashTable == NULL)
		return (NULL);

	NewHashTable->array = malloc(sizeof(hash_node_t *) * size);
	NewHashTable->size = size;

	return (NewHashTable);
}
