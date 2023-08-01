#include "lists.h"

/**
 * free_listint - lorem ips
 * @head: dol si ame
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
