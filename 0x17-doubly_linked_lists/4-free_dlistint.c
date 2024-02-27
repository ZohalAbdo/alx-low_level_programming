#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail;

	for (tail = head; tail != NULL; tail = tail->next)
	{
		free(tail->n);
		free(tail);
	}

}