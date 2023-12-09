#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of list
 *@head: head
 *@n: value
 *Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int v = n;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = v;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	new->prev = NULL;
	*head = new;
	return (*head);



}
