#include "lists.h"

/**
 * sum_dlistint - ret sums of nd elems
 * @head: first elem- head
 * Return: sum of d elem
 */

int sum_dlistint(dlistint_t *head)
{
	int addition;

	addition = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			addition += head->n;
			head = head->next;
		}
	}
	return (addition);
}
