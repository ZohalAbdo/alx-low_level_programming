#include "lists.h"
/**
 * listint_len - functions that print integers in the list
 * @h: first node
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
