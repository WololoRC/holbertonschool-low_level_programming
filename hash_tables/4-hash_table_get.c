#include "hash_tables.h"
/**
 *hash_table_get - get a value of a key
 *
 *@ht: hash table
 *@key: key
 * Return: value on success, NULL if fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *crt_n = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index(key, ht->size);
	crt_n = ht->array[index];

	if (!crt_n)
		return (NULL);

	return (crt_n->value);
}
