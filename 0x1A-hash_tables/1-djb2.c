#include "hash_tables.h"

/**
 * hash_djb2 - hashes passed param using djb2 algo.
 * @str: str to perform hashing on.
 * Return: hashing result after calculation.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int my_hashable;
	int konstant;

	my_hashable = 5381;
	while ((konstant = *str++))
		my_hashable = ((my_hashable << 5) + my_hashable) + konstant;

	return (my_hashable);
}
