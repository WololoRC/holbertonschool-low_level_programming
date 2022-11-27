#include "hash_tables.h"
/**
 *hash_table_delete - delete a hash table content (Task not complete)
 *
 *@ht: hash table
 *
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cnt = 0;
	hash_node_t *crt_n = NULL, *crt_n2 = NULL;

	if (!ht)
		return;

	while (cnt < ht->size)
	{
		if (ht->array[cnt])
			crt_n = ht->array[cnt];

		while (crt_n)
		{
			crt_n2 = crt_n;
			crt_n = crt_n->next;

			if (crt_n2->key)
				free(crt_n2->key);
			if (crt_n2->value)
				free(crt_n2->value);

			free(crt_n2);
		}
		cnt++;
	}

	free(ht->array);
	free(ht);
}
