#include "lists.h"

/**
 * print_dlistint - lorem ipsum dolor
 * @h: first member -- head
 * Return: d num of nds
 */

size_t print_dlistint(const dlistint_t *h)
{
	int holder;

	holder = 0;

	if (h == NULL)
		return (holder);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		holder++;
		h = h->next;
	}
	return (holder);
}
