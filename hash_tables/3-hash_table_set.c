#include "hash_tables.h"
/**
 *hash_table_set - add a new node on a hash table.
 *
 *@key: key
 *@value: value
 *@ht: node of a hash table
 * Return: 1 on success, 0 if fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, sizeof(*ht));
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));

	new->key = strdup(key);
	new->value = strdup(value);

	ht->array[index] = new;

	return (1);
}
