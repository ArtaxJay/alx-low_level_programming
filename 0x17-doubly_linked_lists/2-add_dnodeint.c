#include "lists.h"

/**
 * add_dnodeint - push a new nd at
 * d start
 * @head: first member -- head
 * @n: val of d elem
 * Return: d location/address of d new elem
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *hd;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}

	nw->next = hd;
	if (hd != NULL)
		hd->prev = nw;
	*head = nw;
	return (nw);
}
