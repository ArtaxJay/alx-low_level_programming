#include "lists.h"

/**
 * get_dnodeint_at_index - lorem ips
 * @head: first member - head
 * @index: index of nth nd
 * Return: nth nd
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (j = 0; head != NULL; j++)
	{
		if (j == index)
			break;
		head = head->next;
	}
	return (head);
}
