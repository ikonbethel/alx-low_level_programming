#include "hash_tables.h"
#include <stdlib.h>

/**
 *hash_table_create - function that creates a hash table.
 *@size: size of array.
 *
 *
 *
 *
 *Return: NULL if something went wrong, or new table if all goes well.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	newTable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);
	newTable->size = size;
	newTable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!newTable->array)
		return (NULL);

	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;

	return (newTable);
}
