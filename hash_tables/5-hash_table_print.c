#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cnt = 0;
	hash_node_t *crt_n = NULL;

	if (!ht)
		return;

	printf("{");

	while (cnt < ht->size)
	{
		crt_n = ht->array[cnt];

		while (crt_n)
		{
			printf("'%s' : '%s'", crt_n->key, crt_n->value);
			if (!ht->array[cnt + 1])
				break;

			printf(", ");
			crt_n = crt_n->next;
		}
		cnt++;

	}
	printf("}\n");
}
