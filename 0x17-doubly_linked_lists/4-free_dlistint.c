#include "lists.h"

/**
 * free_dlistint - lorem ipsum dolor
 * @head: first mem -- head
 * Return: no ret val
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *mundane;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((mundane = head) != NULL)
	{
		head = head->next;
		free(mundane);
	}
}
