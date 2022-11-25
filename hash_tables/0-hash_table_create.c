#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table.
 *
 *@size: size of
 *
 * Return: @new hash table on success, NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = calloc(size, sizeof(hash_node_t));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	new->size = size;

	return (new);
}
