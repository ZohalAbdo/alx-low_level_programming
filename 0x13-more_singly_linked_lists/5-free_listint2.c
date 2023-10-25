#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}
}
