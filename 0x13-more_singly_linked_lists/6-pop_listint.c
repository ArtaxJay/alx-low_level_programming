#include "lists.h"

/**
 * pop_listint - lorem ipsum
 * @head: lorem ispum
 * Return: lorem
 */


int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
	return (0);
	}

	num = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (num);
}
