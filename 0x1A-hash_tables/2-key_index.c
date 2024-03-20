#include "hash_tables.h"

/**
 * key_index - find the position/index of a key.
 * @key: find the position of this key.
 * @size: the length/size of the arr.
 * Return: find and ret the position/index value.
 * Description: the function will use the djb2 algo that is
 * defined in the hash_djb2 module.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
