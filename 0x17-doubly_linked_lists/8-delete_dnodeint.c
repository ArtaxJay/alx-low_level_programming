#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes lorem
 * @head: first elem -- head
 * @index: index of d nw nd
 * Return: success - 1, 0 - otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ha;
	dlistint_t *hb;
	unsigned int j;

	ha = *head;

	if (ha != NULL)
		while (ha->prev != NULL)
			ha = ha->prev;
	j = 0;

	while (ha != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = ha->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hb->next = ha->next;

				if (ha->next != NULL)
					ha->next->prev = hb;
			}
			free(ha);
			return (1);
		}
		hb = ha;
		ha = ha->next;
		j++;
	}
	return (-1);
}
