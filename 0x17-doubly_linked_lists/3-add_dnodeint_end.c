#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of list
 *@head: head
 *@n: value
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int v = n;

	dlistint_t *temp, *tp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = v;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	return (temp);
}

