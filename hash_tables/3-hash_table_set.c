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
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *new = NULL;

	if (!ht)
		return (0);

	new = add_node(&new, (const char *) key, (const char *) value);
	if (!new)
		return (0);

	if (!ht->array[index])
	{
		ht->array[index] = new;
		return (1);
	}

	ht->array[index] = new;
	
	return (1);
}
/**
 *add_node - add nodes at the beginning of a hash_node_t list
 *
 *@head: head pointer
 *@value: value
 *@key: key
 * Return: if !malloc returns NULL, else a new node.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;

	*head = new;

	return (new);
}
