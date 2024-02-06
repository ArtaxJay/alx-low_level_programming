#include "search_algos.h"

/**
 * linear_search - do a linear search on an array
 * @array: ptr to the first array member to search
 * @size: this args is the number of elements in the array
 * @value: this arg is the target to lookup in the array
 * Return: -1 if value is not found
 *	In match: ret the first occurrence
 */

int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
