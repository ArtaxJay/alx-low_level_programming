#include "hash_tables.h"

/**
 * hash_table_print - Outputs the hash  to the STDOUT.
 * @ht: ptr to hash
 * Return: NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iter;
	unsigned char delim = 0;
	hash_node_t *hash_node;

	if (ht == NULL)
		return;

	printf("{");
	for (iter = 0; iter < ht->size; iter++)
	{
		if (ht->array[iter] != NULL)
		{
			if (delim == 1)
				printf(", ");

			hash_node = ht->array[iter];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			delim = 1;
		}
	}
	printf("}\n");
}
