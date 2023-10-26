#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - lorem ips dol
 * @n: int args
 * @prev: pointer to d prev nd
 * @next: pointer to d next nd
 *
 * Description: sit amet consectetur
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int sum_dlistint(dlistint_t *head);


#endif
