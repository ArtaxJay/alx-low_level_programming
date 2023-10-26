#include "lists.h"

/**
 * dlistint_len - ret d num of elem
 * in a double linked list
 * @h: first member -- head
 * Return: d num of nds
 */

size_t dlistint_len(const dlistint_t *h)
{
	int holder;

	holder = 0;

	if (h == NULL)
		return (holder);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		holder++;
		h = h->next;
	}
	return (holder);
}
