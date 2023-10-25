#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * @head: pointer
 * @idx: index
 * @n: new node
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *x = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = x;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (x == NULL || x->next == NULL)
			return (NULL);

		x = x->next;
	}
	new->next = x->next;
	x->next = new;
	return (new);
}
