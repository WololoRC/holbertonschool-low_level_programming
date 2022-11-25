#include "hash_tables.h"
/**
 *key_index - generate the index of a key
 *
 *@key: content to index
 *@size: size of hash table
 * Return: @new_key (djb2 value of @key % size).
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key = hash_djb2(key);

	return (new_key % (size));
}
