#include "lists.h"
/**
 * add_nodeint - add a new node to linked list
 * @head: pointer
 * @n: int
 * Return:address of  node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
