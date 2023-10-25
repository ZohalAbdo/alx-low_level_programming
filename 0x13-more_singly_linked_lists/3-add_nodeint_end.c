#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node 
 * @head: pointer
 * @n: string
 * Return: Address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new;

	tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = newe;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
