#include "hash_tables.h"

/**
 * hash_table_get - Get the of a key in a hash table.
 * @ht: ptr to the hash.
 * @key: get the value of the key
 * Return: ret NULL if key is not found
 *         else ret the key value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	pos = key_index((const unsigned char *)key, ht->size);
	if (pos >= ht->size)
		return (NULL);

	hash_node = ht->array[pos];
	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;

	return ((hash_node == NULL) ? NULL : hash_node->value);
}
