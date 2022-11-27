#include "hash_tables.h"
/**
 *hash_table_print - print a hash table by pure force
 *
 *@ht: hash table
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cnt = 0;
	int sep = 0;

	if (!ht)
		return;

	printf("{");

	while (cnt < ht->size)
	{
		if (ht->array[cnt])
		{
			if (sep == 1)
				printf(", ");
			sep = 1;

			printf("'%s' : %s", (ht->array[cnt]->key), (ht->array[cnt])->value);

			while ((ht->array[cnt])->next)
			{
				printf("'%s : %s'", (ht->array[cnt])->key, (ht->array[cnt])->value);
				ht->array[cnt] = (ht->array[cnt])->next;
			}
		}

		cnt++;
	}

	printf("}\n");
}
