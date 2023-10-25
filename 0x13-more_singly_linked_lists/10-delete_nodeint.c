#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * @head:pointer
 * @index:index
 * Return:1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *X, *new = *head;
	unsigned int i;

	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (new->next == NULL)
			return (-1);

		new = new->next;
	}
	X = new->next;
	new->next = X->next;
	free(X);
	return (1);
}
