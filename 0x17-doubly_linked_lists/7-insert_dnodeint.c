#include "lists.h"

/**
 * insert_dnodeint_at_index - lorem ipsum
 * @h: first mem - head
 * @idx: index of d nw nd
 * @n: val of d nw nd
 * Return: d location of d nw nd
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;
	dlistint_t *hd;
	unsigned int j;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		hd = *h;
		j = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (j == idx)
			{
				if (hd->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = hd->next;
						nw->prev = hd;
						hd->next->prev = nw;
						hd->next = nw;
					}
				}
				break;
			}
			hd = hd->next;
			j++;
		}
	}

	return (nw);
}
