#include "lists.h"
/**
 * pop_listint - Delete the head node
 * @head:pointer
 * Return: head nodes
 */
int pop_listint(listint_t **head)
{
	int i;

	i = 0;

	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
