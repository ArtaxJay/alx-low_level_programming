#include "lists.h"

/**
 * add_dnodeint_end - push to nd end
 * @head: first member -- head
 * @n: val of d elem
 * Return: d location of d nw elem
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = nw;
	}
	else
	{
		*head = nw;
	}
	nw->prev = hd;

	return (nw);
}
