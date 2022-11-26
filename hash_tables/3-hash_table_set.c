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
	unsigned long int index = 0;
	hash_node_t *new, *last;

	if (!ht)
		return (0);

	index = key_index(key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = new;

		return (1);
	}

	last = ht->array[index];

	if (last->key == key)
	{
		last->value = strdup(value);
		return (1);
	}

	new->next = last;
	ht->array[index] = new;

	return (1);
}
