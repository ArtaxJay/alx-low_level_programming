#include "hash_tables.h"

/**
 * hash_table_create - This function will create a hash_table.
 * @size: the arr size
 *
 * Return: on err, ret NULL.
 *         else ret a ptr to the head of the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int iter;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
		hash_t->array[iter] = NULL;

	return (hash_t);
}
