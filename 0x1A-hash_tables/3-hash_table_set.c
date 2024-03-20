#include "hash_tables.h"

/**
 * hash_table_set - insert a value to a hash table.
 * @ht: ptr to the hash.
 * @key: key to insert. Cant be empty str.
 * @value: paired-with-inserted-key value.
 * Return: failed ret 0
 *         else ret 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos, iter;
	char *copy_val;
	hash_node_t *pos_new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	for (iter = pos; ht->array[iter]; iter++)
	{
		if (strcmp(ht->array[iter]->key, key) == 0)
		{
			free(ht->array[iter]->value);
			ht->array[iter]->value = copy_val;
			return (1);
		}
	}

	pos_new = malloc(sizeof(hash_node_t));
	if (pos_new == NULL)
	{
		free(copy_val);
		return (0);
	}
	pos_new->key = strdup(key);
	if (pos_new->key == NULL)
	{
		free(pos_new);
		return (0);
	}
	pos_new->value = copy_val;
	pos_new->next = ht->array[pos];
	ht->array[pos] = pos_new;

	return (1);
}
