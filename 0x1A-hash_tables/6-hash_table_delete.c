#include "hash_tables.h"

/**
 * hash_table_delete - this function will delete a hash
 * @ht: ptr to the hash to delete
 * Return: NULL
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash_head = ht;
	unsigned long int iter;
	hash_node_t *hash_node, *temp;

	for (iter = 0; iter < ht->size; iter++)
	{
		if (ht->array[iter] != NULL)
		{
			hash_node = ht->array[iter];
			while (hash_node != NULL)
			{
				temp = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = temp;
			}
		}
	}
	free(hash_head->array);
	free(hash_head);
}
